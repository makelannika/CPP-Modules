/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:40:22 by amakela           #+#    #+#             */
/*   Updated: 2024/10/01 01:03:51 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include <iostream>

class ICharacter;

class AMateria {
	protected:
		std::string	type;

	public:
		AMateria();
		virtual ~AMateria();

		AMateria(const AMateria& obj);
		AMateria(std::string const & type);
		
		AMateria& operator=(const AMateria& obj);
		
		std::string const & getType() const;
		
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
