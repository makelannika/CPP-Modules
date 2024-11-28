/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 13:59:53 by amakela           #+#    #+#             */
/*   Updated: 2024/11/28 20:18:09 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>

class Span {
	private:
		std::vector<int> ints;

	public:
		Span() = delete;
		~Span();
		Span(const Span& obj);
		const Span& operator=(const Span& obj);

		Span(unsigned n);
		
		void	addNumber(int num);
		int		shortestSpan();
		int		longestSpan();
};


#endif
