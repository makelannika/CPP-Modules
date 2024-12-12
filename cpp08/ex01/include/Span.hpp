#ifndef SPAN_HPP
# define SPAN_HPP

#include <stdexcept>
#include <iostream>
#include <set>

class Span {
	private:
		std::multiset<int>	numbers;
		unsigned int		max;

	public:
		Span() = delete;
		~Span();
		Span(const Span& obj);
		const Span& operator=(const Span& obj);

		Span(unsigned int n);
		
		void			addNumber(int num);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
		
		template<typename iterator>
		void	addRange(iterator begin, iterator end) {
			if (static_cast<std::size_t>(std::distance(begin, end)) > max - numbers.size())
				throw std::length_error("not enough capacity to add range");
			numbers.insert(begin, end);
		}
};

#endif
