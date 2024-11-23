/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 13:36:37 by amakela           #+#    #+#             */
/*   Updated: 2024/11/23 19:00:50 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template<typename T>
class Array {
	private:
		unsigned int	len;
		T*				array;
		
	public:
		Array();
		~Array();
		Array(const Array& obj);
		const Array& operator=(const Array& obj);

		Array(unsigned int n);
		unsigned int size() const;
		T& operator[](unsigned int idx);
};

#include "Array.tpp"

#endif
