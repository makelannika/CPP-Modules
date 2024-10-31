/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 23:54:12 by amakela           #+#    #+#             */
/*   Updated: 2024/08/27 18:08:32 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class Cat : public AAnimal {
	private:
		Brain*	brain;
		
    public:
        Cat();
        ~Cat() override;

        Cat(const Cat& obj);

        Cat& operator=(const Cat& obj);
        
        void	makeSound() const override;
};

#endif
