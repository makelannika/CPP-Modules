/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 11:02:36 by amakela           #+#    #+#             */
/*   Updated: 2024/11/26 14:45:36 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>
#include <string>

int main() {
	int iFirst(1), iSecond(2);
	float fFirst(1.5), fSecond(3.2);
	std::string sFirst("hi"), sSecond("hello");

	std::cout << "swap ints" << std::endl;
	std::cout << "first: " << iFirst << "\tsecond: " << iSecond << std::endl;
	::swap(iFirst, iSecond);
	std::cout << "first: " << iFirst << "\tsecond: " << iSecond << std::endl;
	
	std::cout << std::endl << "swap floats" << std::endl;
	std::cout << "first: " << fFirst << "\tsecond: " << fSecond << std::endl;
	::swap(fFirst, fSecond);
	std::cout << "first: " << fFirst << "\tsecond: " << fSecond << std::endl;
	
	std::cout << std::endl << "swap strings" << std::endl;
	std::cout << "first: " << sFirst << "\tsecond: " << sSecond << std::endl;
	::swap(sFirst, sSecond);
	std::cout << "first: " << sFirst << "\tsecond: " << sSecond << std::endl;
	
	std::cout << std::endl << "ints" << std::endl;
	std::cout << "min: " << ::min(iFirst, iSecond) << std::endl;
	std::cout << "max: " << ::max(iFirst, iSecond) << std::endl;
	
	std::cout << std::endl << "floats" << std::endl;
	std::cout << "min: " << ::min(fFirst, fSecond) << std::endl;
	std::cout << "max: " << ::max(fFirst, fSecond) << std::endl;

	std::cout << std::endl << "strings" << std::endl;
	std::cout << "min: " << ::min(sFirst, sSecond) << std::endl;
	std::cout << "max: " << ::max(sFirst, sSecond) << std::endl;
}
