#ifndef RPN_HPP
# define RPN_HPP

#include <stack>

class RPN {
    private:
        std::stack<int> m_stack;

        void    applyOperation(char token);

    public:
        RPN();
        ~RPN();
        RPN(const RPN& other);
        RPN&    operator=(const RPN& other);

        int evaluate(const std::string& expr);
};

#endif
