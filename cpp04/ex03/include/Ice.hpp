/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:47:10 by amakela           #+#    #+#             */
/*   Updated: 2024/10/01 01:30:20 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {
	public:
		Ice();
		~Ice() override;

		Ice(const Ice& obj);

		Ice&	operator=(const Ice& obj);
		
		Ice*	clone() const override;
		void	use(ICharacter& target) override;
};

#endif
