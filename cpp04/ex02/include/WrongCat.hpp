/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 00:56:27 by amakela           #+#    #+#             */
/*   Updated: 2024/08/27 01:01:11 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

class WrongCat : public WrongAnimal {
    public:
        WrongCat();
        ~WrongCat() override;

        WrongCat(const WrongCat& obj);

        WrongCat& operator=(const WrongCat& obj);
        
        void        makeSound() const override;
};

#endif