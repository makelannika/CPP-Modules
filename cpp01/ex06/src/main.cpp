/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 12:13:17 by amakela           #+#    #+#             */
/*   Updated: 2024/08/14 22:13:44 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

int main (int argc, char** argv) {
    if (argc != 2) {
        std::cout << "Error: program takes one argument" << std::endl;
        return (1);
    }
    Harl    harl;
    harl.complain(argv[1]);
    return (0);
}
