/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:51:41 by amakela           #+#    #+#             */
/*   Updated: 2024/10/01 01:11:46 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::~AMateria() {}

AMateria::AMateria(const AMateria& obj) {
	type = obj.type;
}

AMateria::AMateria(std::string const & type) {
	this->type = type;
}

AMateria& AMateria::operator=(const AMateria& obj) {
	if (this != &obj)
		type = obj.type;
	return *this;
}

std::string const & AMateria::getType() const {
	return type;
}

void	AMateria::use(ICharacter&) {}
