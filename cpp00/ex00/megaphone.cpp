/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 23:37:34 by amakela           #+#    #+#             */
/*   Updated: 2024/08/01 16:24:42 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else {
        for (int i = 1; argv[i]; i++) {
            for (int j = 0; argv[i][j]; j++) {
				argv[i][j] = std::toupper(argv[i][j]);
            }
            std::cout << argv[i];
        }
        std::cout << std::endl;
    }
    return (0);
}
