/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:28:48 by amakela           #+#    #+#             */
/*   Updated: 2024/08/27 16:27:30 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain& obj) {
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
			ideas[i] = obj.ideas[i];
}

Brain&	Brain::operator=(const Brain& obj) {
	std::cout << "Brain copy assignment operator called" << std::endl;
	if (this != &obj) {
		for (int i = 0; i < 100; i++)
			ideas[i] = obj.ideas[i];
	}
	return *this;
}
