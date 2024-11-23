/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:54:40 by amakela           #+#    #+#             */
/*   Updated: 2024/11/23 11:33:28 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <climits>
#include <float.h>
#include <string>
#include <limits>

enum Type { CHAR, INT, DOUBLE, FLOAT, INVALID };

class ScalarConverter {
    public:
        ScalarConverter() = delete;
        ~ScalarConverter()= delete;
        ScalarConverter(const ScalarConverter& obj) = delete;
        ScalarConverter& operator=(const ScalarConverter& obj) = delete;
        
        static void convert(std::string str);
};

#endif
