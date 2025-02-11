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
		using const_iterator = typename Container::const_iterator;

        iterator begin() { return this->c.begin(); }
        iterator end() { return this->c.end(); }

        const_iterator begin() const { return this->c.begin(); }
        const_iterator end() const { return this->c.end(); }
};

#endif
