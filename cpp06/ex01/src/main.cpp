/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 22:28:39 by amakela           #+#    #+#             */
/*   Updated: 2024/11/17 14:14:07 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"
#include <iostream>

int main() {
    Data*       ptr = new Data{"Data", 2};
    Data*       deserialized;
    uintptr_t   serialized;

    std::cout << "original pointer:\t" << ptr << std::endl;
    serialized = Serializer::serialize(ptr);
    deserialized = Serializer::deserialize(serialized);
    std::cout << "deserialized pointer:\t" << deserialized << std::endl;
    std::cout << "name: " << deserialized->name << std::endl;
    std::cout << "value: " << deserialized->value << std::endl;
    
    delete ptr;
}
