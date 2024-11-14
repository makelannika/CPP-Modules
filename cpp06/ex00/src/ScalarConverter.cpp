/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:58:40 by amakela           #+#    #+#             */
/*   Updated: 2024/11/14 18:34:47 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

template<typename T>
void display(T value) {
	if (std::isnan(value) || std::isinf(value) || value < 0 || value > 127) {
        std::cout << "char: impossible" << std::endl;
	} else if (value < 32 || value == 127) {
        std::cout << "char: non displayable" << std::endl;
	} else {
        std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
	}
    if (std::isnan(value) || std::isinf(value) || value < static_cast<double>(INT_MIN) || value > static_cast<double>(INT_MAX)) {
        std::cout << "int: impossible" << std::endl;
	} else {
        std::cout << "int: " << static_cast<int>(value) << std::endl;
	}
	if (!std::isnan(value) && !std::isinf(value) && (value < std::numeric_limits<float>::lowest() || value > std::numeric_limits<float>::max()))
		std::cout << "float: impossible" << std::endl;
	else
    	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(value) << std::endl;
}

bool hasDecimalPoint(std::string input) {
	int i = 0;

	while (input[i]) {
		if (input[i++] == '.')
			return true;
	}
	return false;
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
    if (input == "+inff" || input == "-inff" || input == "nanf")
        return FLOAT;
    if (input == "+inf" || input == "-inf" || input == "nan")
        return DOUBLE;
        
    try {
        std::stoi(input, &idx);
        if (lengthIsEqual(input, idx))
            return INT;
        } catch (std::exception& e) {}
    try {
        std::stof(input, &idx);
        if (lengthIsEqual(input, idx + 1) && hasDecimalPoint(input) && input[idx] == 'f')
            return FLOAT;
        } catch (std::exception& e) {}
    try {
        std::stod(input, &idx);
        if (lengthIsEqual(input, idx) && hasDecimalPoint(input))
            return DOUBLE;
        } catch (std::exception& e) {}
    return INVALID;
}

void ScalarConverter::convert(std::string str) {
    char    charValue;
    int     intValue;
    float   floatValue;
    double  doubleValue;

    switch (getType(str)) {
        case CHAR:
            std::cout << "input is a char" << std::endl;
            charValue = str[0];
            display(charValue);
            break ;
        case INT:
            std::cout << "input is an int" << std::endl;
            intValue = stoi(str);
            display(intValue);
            break ;
        case FLOAT:
            std::cout << "input is a float" << std::endl;
            floatValue = stof(str);
            display(floatValue);
            break ;
        case DOUBLE:
            std::cout << "input is a double" << std::endl;
            doubleValue = stod(str);
            display(doubleValue);
            break ;
        case INVALID:
            std::cout << "input is invalid" << std::endl;
    }
}
