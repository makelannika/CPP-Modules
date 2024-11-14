/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:54:40 by amakela           #+#    #+#             */
/*   Updated: 2024/11/14 18:47:53 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <iomanip>
#include <climits>
#include <string>
#include <limits>
#include <cmath>

enum type { CHAR, INT, DOUBLE, FLOAT, INVALID };

class ScalarConverter {
    public:
        ScalarConverter() = delete;
        ~ScalarConverter()= delete;
        ScalarConverter(const ScalarConverter& obj) = delete;
        ScalarConverter& operator=(const ScalarConverter& obj) = delete;
        
        static void convert(std::string str);
};

#endif
