#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>

template<class T,class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {
    public:
        MutantStack() {}
        ~MutantStack() {}
        MutantStack(const MutantStack& other) : std::stack<T, Container>(other) {}
        MutantStack&    operator=(const MutantStack& other) {
            if (this != &other)
                std::stack<T, Container>::operator=(other);
            return *this;
        }

        using iterator = typename Container::iterator;

        iterator begin() { return this->c.begin(); }
        iterator end() { return this->c.end(); }
};

#endif
