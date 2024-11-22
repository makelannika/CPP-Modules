/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 11:02:36 by amakela           #+#    #+#             */
/*   Updated: 2024/11/22 11:30:01 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

int main() {
	int iFirst = 1;
	int iSecond = 2;
	float fFirst = 1.5;
	float fSecond = 3.2;

	std::cout << "swap ints" << std::endl;
	std::cout << "first: " << iFirst << " second: " << iSecond << std::endl;
	swap(iFirst, iSecond);
	std::cout << "first: " << iFirst << " second: " << iSecond << std::endl;
	
	std::cout << std::endl << "swap floats" << std::endl;
	std::cout << "first: " << fFirst << " second: " << fSecond << std::endl;
	swap(fFirst, fSecond);
	std::cout << "first: " << fFirst << " second: " << fSecond << std::endl;
	
	std::cout << std::endl << "ints" << std::endl;
	std::cout << "min: " << min(iFirst, iSecond) << std::endl;
	std::cout << "max: " << max(iFirst, iSecond) << std::endl;
	
	std::cout << std::endl << "floats" << std::endl;
	std::cout << "min: " << min(fFirst, fSecond) << std::endl;
	std::cout << "max: " << max(fFirst, fSecond) << std::endl;
}
