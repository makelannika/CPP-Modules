#ifndef SPAN_HPP
# define SPAN_HPP

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

		Span(unsigned n);
		
		void			addNumber(int num);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
};


#endif
