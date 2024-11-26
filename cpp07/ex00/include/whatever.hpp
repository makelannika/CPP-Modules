/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 11:11:12 by amakela           #+#    #+#             */
/*   Updated: 2024/11/26 14:39:50 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void swap(T& first, T& second) {
	T temp = first;
	first = second;
	second = temp;
}

template<typename T>
T min(const T& first, const T& second) { return first < second ? first : second; }

template<typename T>
T max(const T& first, const T& second) { return first > second ? first : second; }

#endif
