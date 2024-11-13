/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:58:40 by amakela           #+#    #+#             */
/*   Updated: 2024/11/13 23:26:06 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void displayDouble(double value) {
    if (std::isnan(value) || std::isinf(value) || std::fmod(value, 1) != 0 || value > 127)
        std::cout << "char: impossible" << std::endl;
    else if (value < 32 || value == 127)
        std::cout << "char: non displayable" << std::endl;
    else
        std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
    if (std::isnan(value) || std::isinf(value) || value < INT_MIN || value > INT_MAX)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(value) << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << value << std::endl;
}

void displayFloat(float value) {
    if (std::isnan(value) || std::isinf(value) || std::fmod(value, 1) != 0 || value > 127)
        std::cout << "char: impossible" << std::endl;
    else if (value < 32 || value == 127)
        std::cout << "char: non displayable" << std::endl;
    else
        std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
    if (std::isnan(value) || std::isinf(value) || value < INT_MIN || value > INT_MAX)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(value) << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << value << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(value) << std::endl;
}

void displayInt(int value) {
    if (value < 32 || value == 127)
        std::cout << "char: non displayable" << std::endl;
    else if (value > 127)
        std::cout << "char: impossible" << std::endl;
    else
        std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
    std::cout << "int: " << value << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(value) << std::endl;
}

void displayChar(char value) {
    if (value < 32 || value == 127)
        std::cout << "char: non displayable" << std::endl;
    else
        std::cout << "char: '" << value << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(value) << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(value) << std::endl;
}

int getType(std::string input) {
    size_t      idx;
    
    if (input.length() == 1 && (input[0] < '0' || input[0] > '9'))
        return CHAR;
    if (input == "+inff" || input == "-inff" || input == "nanf")
        return FLOAT;
    if (input == "+inf" || input == "-inf" || input == "nan")
        return DOUBLE;
        
    try {
        std::stoi(input, &idx);
        if (input.length() == idx)
            return INT;
        } catch (std::exception& e) {}
    try {
        std::stof(input, &idx);
        if (input.length() - 1 == idx && input[idx] == 'f'
            && input.find('.') != std::string::npos && input[idx - 1] != '.')
            return FLOAT;
        } catch (std::exception& e) {}
    try {
        std::stod(input, &idx);
        if (input.length() == idx && input[idx - 1] != '.'
            && input.find('.') != std::string::npos)
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
            displayChar(charValue);
            break ;
        case INT:
            std::cout << "input is an int" << std::endl;
            intValue = stoi(str);
            displayInt(intValue);
            break ;
        case FLOAT:
            std::cout << "input is a float" << std::endl;
            floatValue = stof(str);
            displayFloat(floatValue);
            break ;
        case DOUBLE:
            std::cout << "input is a double" << std::endl;
            doubleValue = stod(str);
            displayDouble(doubleValue);
            break ;
        case INVALID:
            std::cout << "input is invalid" << std::endl;
    }
}
