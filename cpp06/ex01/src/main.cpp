/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 22:28:39 by amakela           #+#    #+#             */
/*   Updated: 2024/11/13 23:41:51 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"
#include <iostream>

int main() {
    Data*       ptr = new Data{1, 2.3};
    uintptr_t   raw;

    std::cout << "address of data: " << ptr << std::endl;
    raw = Serializer::serialize(ptr);
    std::cout << "address of data: " << Serializer::deserialize(raw) << std::endl;
    
    delete ptr;
}
