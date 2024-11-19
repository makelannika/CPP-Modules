/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:45:53 by amakela           #+#    #+#             */
/*   Updated: 2024/11/19 14:34:52 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char** argv) 
{
    if (argc > 1) {
        std::string input(argv[1]);
        ScalarConverter::convert(input);
    }
	else
	{
		std::cout << "INT MAX" << std::endl;
		ScalarConverter::convert(std::to_string(std::numeric_limits<int>::max()));
		std::cout << std::endl;
		std::cout << "INT MIN" << std::endl;
		ScalarConverter::convert(std::to_string(std::numeric_limits<int>::min()));
		std::cout << std::endl;
		std::cout << "FLOAT MAX" << std::endl;
		ScalarConverter::convert(std::to_string(std::numeric_limits<float>::max()) + 'f');
		std::cout << std::endl;
		std::cout << "FLOAT MIN" << std::endl;
		ScalarConverter::convert(std::to_string(std::numeric_limits<float>::min()) + 'f');
		std::cout << std::endl;
		std::cout << "FLOAT LOWEST" << std::endl;
		ScalarConverter::convert(std::to_string(std::numeric_limits<float>::lowest()) + 'f');
		std::cout << std::endl;
		std::cout << "DOUBLE MAX" << std::endl;
		ScalarConverter::convert(std::to_string(std::numeric_limits<double>::max()));
		std::cout << std::endl;
		std::cout << "DOUBLE MIN" << std::endl;
		ScalarConverter::convert(std::to_string(std::numeric_limits<double>::min()));
		std::cout << std::endl;
		std::cout << "DOUBLE LOWEST" << std::endl;
		ScalarConverter::convert(std::to_string(std::numeric_limits<double>::lowest()));
	}
}
