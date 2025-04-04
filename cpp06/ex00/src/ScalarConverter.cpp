/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:58:40 by amakela           #+#    #+#             */
/*   Updated: 2025/03/20 16:25:47 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

template<typename T>
void display(T value) {
	if (value < 0 || value > 127 || value != value)
        std::cout << "char: impossible" << std::endl;
	else if (value < 32 || value > 126)
        std::cout << "char: non displayable" << std::endl;
	else {
        std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
	}
	
	if (value < static_cast<double>(INT_MIN) || value > static_cast<double>(INT_MAX) || value != value)
        std::cout << "int: impossible" << std::endl;
	else {
        std::cout << "int: " << static_cast<int>(value) << std::endl;
	}
	
	if (value < static_cast<double>(-DBL_MAX) || value > static_cast<double>(DBL_MAX))
		std::cout << "float: " << (value < 0 ? "" : "+") << static_cast<float>(value)  << "f" << std::endl;
	else if (value < static_cast<double>(-FLT_MAX) || value > static_cast<double>(FLT_MAX))
		std::cout << "float: impossible" << std::endl;
	else {
		std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
	}
	
	if (value < static_cast<double>(-DBL_MAX) || value > static_cast<double>(DBL_MAX))
		std::cout << "double: " << (value < 0 ? "" : "+") << static_cast<double>(value) << std::endl;
	else
		std::cout << "double: " << static_cast<double>(value) << std::endl;
}

bool lengthIsEqual(std::string input, size_t lenParsed) {
	size_t i = 0;

	while (input[i])
		i++;
	if (i == lenParsed)
		return true;
	return false;
}

int getType(std::string input) {
    size_t      idx;
    
    if (lengthIsEqual(input, 1) && (input[0] < '0' || input[0] > '9'))
        return CHAR;
    try {
        std::stoi(input, &idx);
        if (lengthIsEqual(input, idx))
            return INT;
        } catch (std::exception& e) {}
    try {
        std::stof(input, &idx);
        if (lengthIsEqual(input, idx + 1) && input[idx] == 'f')
            return FLOAT;
        } catch (std::exception& e) {}
    try {
        std::stod(input, &idx);
        if (lengthIsEqual(input, idx))
            return DOUBLE;
        } catch (std::exception& e) {}
    return INVALID;
}

void ScalarConverter::convert(std::string input) {
    char    charValue;
    int     intValue;
    float   floatValue;
    double  doubleValue;

    switch (getType(input)) {
        case CHAR:
            charValue = input[0];
            display(charValue);
            break ;
        case INT:
            intValue = stoi(input);
            display(intValue);
            break ;
        case FLOAT:
            floatValue = stof(input);
            display(floatValue);
            break ;
        case DOUBLE:
            doubleValue = stod(input);
            display(doubleValue);
            break ;
        case INVALID:
            std::cout << "input is invalid" << std::endl;
    }
}
