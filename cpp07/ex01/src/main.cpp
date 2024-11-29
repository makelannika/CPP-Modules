/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 11:44:56 by amakela           #+#    #+#             */
/*   Updated: 2024/11/26 17:57:44 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main() {
	std::string	sArray[] = {"cat", "dog", "mouse"};
	int			iArray[] = {1, 2, 3, 4};
	float		fArray[] = {4.2, 5.16, 7.2};
	
	try {
		std::cout << "string array:" << std::endl;
		iter(sArray, sizeof(sArray) / sizeof(sArray[0]), display<std::string>);
		
		std::cout << std::endl << "int array:" << std::endl;
		iter(iArray, sizeof(iArray) / sizeof(iArray[0]), display<int>);

		std::cout << std::endl << "float array:" << std::endl;
		iter(fArray, sizeof(fArray) / sizeof(fArray[0]), display<float>);

		iter<int>(nullptr, 5, display<int>);
	} catch (std::exception& e) {
		std::cerr << std::endl << e.what() << std::endl;
	}
}


