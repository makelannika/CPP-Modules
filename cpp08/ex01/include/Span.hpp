/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 13:59:53 by amakela           #+#    #+#             */
/*   Updated: 2024/11/28 21:27:00 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
