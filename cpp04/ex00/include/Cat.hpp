/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 23:54:12 by amakela           #+#    #+#             */
/*   Updated: 2024/08/27 00:52:45 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>

class Cat : public Animal {
    public:
        Cat();
        ~Cat() override;

        Cat(const Cat& obj);

        Cat& operator=(const Cat& obj);
        
        void	makeSound() const override;
};

#endif
