/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:32:47 by amakela           #+#    #+#             */
/*   Updated: 2024/08/28 21:27:17 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (learned[i])
			delete learned[i];
	}
}

MateriaSource::MateriaSource(const MateriaSource& obj) {
	for (int i = 0; i < 4; i++) {
		if (obj.learned[i])
			learned[i] = obj.learned[i]->clone();
	}
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& obj) {
	if (this != &obj) {
		for (int i = 0; i < 4; i++) {
			if (learned[i])
				delete learned[i];
			if (obj.learned[i])
				learned[i] = obj.learned[i]->clone();
		}
	}
	return *this;
};

void	MateriaSource::learnMateria(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (!learned[i]) {
			learned[i] = m;
			if (m)
				std::cout << "new materia '" << m->getType() << "' learned" << std::endl;
			return ;
		}
	}
	std::cout << "cannot learn more materias" << std::endl;
	delete m;
}

AMateria*	MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (learned[i] && learned[i]->getType() == type) {
			std::cout << type << " created" << std::endl;
			return (learned[i]->clone());
		}
	}
	std::cout << "no template to create '" << type << "'" << std::endl;
	return 0;
}
