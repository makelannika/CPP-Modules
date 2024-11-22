/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 13:30:30 by amakela           #+#    #+#             */
/*   Updated: 2024/11/22 19:38:31 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main() {
	try {
		Array<int> pos(8);
		Array<int> neg(8);
		Array<std::string> animals(4);
		std::string a[4] = {"cat", "dog", "mouse", "horse"};
		 
		for (unsigned int i = 0; i < 8; i++) {
			pos[i] = i;
			neg[i] = !i ? -1 : -i;
			if (i < 4)
				animals[i] = a[i];
		}
		std::cout << "pos array:" << std::endl;
		for (unsigned int i = 0; i < pos.size(); i++) {
			std::cout << pos[i];
			std::cout << (i != pos.size() - 1 ? ", " : "\n");
		}
		std::cout << std::endl << "neg array:" << std::endl;
		for (unsigned int i = 0; i < neg.size(); i++) {
			std::cout << neg[i];
			std::cout << (i != neg.size() - 1 ? ", " : "\n");
		}
		neg = pos;
		std::cout << std::endl << "assigned pos array's values to neg array" << std::endl;
		std::cout << "neg array:" << std::endl;
		for (unsigned int i = 0; i < neg.size(); i++) {
			std::cout << neg[i];
			std::cout << (i != neg.size() - 1 ? ", " : "\n");
		}
		std::cout << std::endl << "animals array:" << std::endl;
		for (unsigned int i = 0; i < animals.size(); i++)
			std::cout << animals[i] << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}
