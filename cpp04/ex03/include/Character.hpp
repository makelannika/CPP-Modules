/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 19:16:29 by amakela           #+#    #+#             */
/*   Updated: 2024/10/01 02:01:47 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {
	private:
		std::string name;
		AMateria*	inventory[4] = {};
		AMateria**	dropped;
		int			nbDropped;
		
	public:
		Character();
		~Character() override;

		Character(const Character& obj);
		Character(std::string name);

		Character&	operator=(const Character& obj);

		std::string const &	getName() const override;
		void				equip(AMateria* m) override;
		void				unequip(int idx) override;
		void				use(int idx, ICharacter& target) override;
};

#endif
