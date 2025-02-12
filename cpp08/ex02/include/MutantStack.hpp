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
		using reverse_iterator = typename Container::reverse_iterator;
		using const_reverse_iterator = typename Container::const_reverse_iterator;

        iterator begin() { return this->c.begin(); }
        iterator end() { return this->c.end(); }

        const_iterator cbegin() const { return this->c.cbegin(); }
        const_iterator cend() const { return this->c.cend(); }

		reverse_iterator rbegin() { return this->c.rbegin(); }
		reverse_iterator rend() { return this->c.rend(); }

		const_reverse_iterator crbegin() const { return this->c.crbegin(); }
		const_reverse_iterator crend() const { return this->c.crend(); }
};

#endif
