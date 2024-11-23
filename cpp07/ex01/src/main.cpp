/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 11:44:56 by amakela           #+#    #+#             */
/*   Updated: 2024/11/23 18:12:13 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main() {
	std::string	sArray[] = {"cat", "dog", "mouse"};
	int			iArray[] = {1, 2, 3, 4};
	float		fArray[] = {4.2, 5.16, 7.2};
	
	std::cout << "string array:" << std::endl;
	iter(sArray, sizeof(sArray) / sizeof(sArray[0]), print<std::string>);
	
	std::cout << std::endl << "int array:" << std::endl;
	iter(iArray, sizeof(iArray) / sizeof(iArray[0]), print<int>);

	std::cout << std::endl << "float array:" << std::endl;
	iter(fArray, sizeof(fArray) / sizeof(fArray[0]), print<float>);

	iter<int>(nullptr, 5, print<int>);
}
