/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:58:37 by amakela           #+#    #+#             */
/*   Updated: 2024/10/01 01:28:48 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::~Cure() {}

Cure::Cure(const Cure& obj) : AMateria(obj) {}

Cure&	Cure::operator=(const Cure&) {
	return *this;
}

Cure*	Cure::clone() const {
	return new Cure();
}

void	Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
