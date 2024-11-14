/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:45:53 by amakela           #+#    #+#             */
/*   Updated: 2024/11/14 16:38:28 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char** argv) 
{
    if (argc > 1) {
        std::string input(argv[1]);
        ScalarConverter::convert(input);
    }
}
