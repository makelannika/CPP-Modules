#include "RPN.hpp"

#include <sstream>
#include <limits>

RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(const RPN& other)
{
    m_stack = other.m_stack;
}

RPN&    RPN::operator=(const RPN& other)
{
    if (this != &other)
        m_stack = other.m_stack;
    return *this;
}

void    RPN::applyOperation(char token)
{
    if (m_stack.size() < 2)
        throw std::invalid_argument("Error: invalid expression");

    int last = m_stack.top(); m_stack.pop();
    int prev = m_stack.top(); m_stack.pop();

    switch (token) {
        case '+':
			if ((last > 0 && prev > std::numeric_limits<int>::max() - last)
				|| (last < 0 && prev < std::numeric_limits<int>::min() - last))
					throw std::overflow_error("Error: overflow in addition");
            m_stack.push(prev + last);
            return;
        case '-':
			if ((last < 0 && prev > std::numeric_limits<int>::max() + last)
				|| (last > 0 && prev < std::numeric_limits<int>::min() + last))
                    throw std::overflow_error("Error: subtraction overflow");
            m_stack.push(prev - last);
            return;
        case '*':
			if (prev != 0 && (last > std::numeric_limits<int>::max() / prev
				|| last < std::numeric_limits<int>::min() / prev))
					throw std::overflow_error("Error: multiplication overflow");
            m_stack.push(prev * last);
            return;
        case '/':
            if (last == 0)
                throw std::runtime_error("Error: division by 0");
			if (prev == std::numeric_limits<int>::min() && last == -1)
                throw std::overflow_error("Error: division overflow");
            m_stack.push(prev / last);
            return;
    }
}

int RPN::evaluate(const std::string& expr)
{
    std::istringstream expression(expr);
    std::string next;
	size_t		idx;

    while (expression >> next) {
        if (std::isdigit(next[0]) || (next.size() > 1 && next[0] == '-')) {
			int num = std::stoi(next, &idx);
			if (next.length() != idx)
				throw std::invalid_argument("invalid expression");
            m_stack.push(num);
		}
        else if (next == "+" || next == "-" || next == "*" || next == "/")
            applyOperation(next[0]);
        else
            throw std::invalid_argument("Error: invalid expression");
    }

    if (m_stack.size() != 1)
        throw std::invalid_argument("Error: invalid expression");
    
    return m_stack.top();
}
