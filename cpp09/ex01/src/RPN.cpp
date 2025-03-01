#include "RPN.hpp"

#include <string>
#include <sstream>

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

bool    RPN::isAllowedToken(const std::string& str)
{
    return (str == "+" || str == "-" || str == "*" || str == "/");
}

void    RPN::applyOperation(char token)
{
    if (m_stack.size() < 2)
        throw std::invalid_argument("Error: invalid expression");

    int last = m_stack.top(); m_stack.pop();
    int prev = m_stack.top(); m_stack.pop();

    switch (token) {
        case '+':
            m_stack.push(prev + last);
            return;
        case '-':
            m_stack.push(prev - last);
            return;
        case '*':
            m_stack.push(prev * last);
            return;
        case '/':
            if (prev == 0)
                throw std::runtime_error("Error: division by 0");
            m_stack.push(prev / last);
            return;
    }
}

int RPN::evaluate(const std::string& expr)
{
    std::istringstream expression(expr);
    std::string next;

    while (expression >> next) {
        if (next.size() == 1 && std::isdigit(next[0]))
            m_stack.push(std::stoi(next));
        else if (isAllowedToken(next))
            applyOperation(next[0]);
        else
            throw std::invalid_argument("Error: invalid expression");
    }

    if (m_stack.size() != 1)
        throw std::invalid_argument("Error: invalid expression");
    
    return m_stack.top();
}
