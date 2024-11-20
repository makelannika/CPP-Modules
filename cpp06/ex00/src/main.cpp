/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:45:53 by amakela           #+#    #+#             */
/*   Updated: 2024/11/20 18:22:47 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char** argv) 
{
    if (argc > 1) {
        std::string input(argv[1]);
        ScalarConverter::convert(input);
    }
	else {
		std::cout << "INT MAX" << std::endl;
		ScalarConverter::convert(std::to_string(std::numeric_limits<int>::max()));
		std::cout << std::endl << "INT MIN" << std::endl;
		ScalarConverter::convert(std::to_string(std::numeric_limits<int>::min()));
		std::cout << std::endl << "FLOAT MAX" << std::endl;
		ScalarConverter::convert(std::to_string(std::numeric_limits<float>::max()) + 'f');
		std::cout << std::endl << "FLOAT LOWEST" << std::endl;
		ScalarConverter::convert(std::to_string(std::numeric_limits<float>::lowest()) + 'f');
		std::cout << std::endl << "DOUBLE MAX" << std::endl;
		ScalarConverter::convert(std::to_string(std::numeric_limits<double>::max()));
		std::cout << std::endl << "DOUBLE LOWEST" << std::endl;
		ScalarConverter::convert(std::to_string(std::numeric_limits<double>::lowest()));
		std::cout << std::endl << "PAST DOUBLE MAX" << std::endl;
		ScalarConverter::convert("1e400");
	}
}
