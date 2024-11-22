/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 11:44:56 by amakela           #+#    #+#             */
/*   Updated: 2024/11/22 13:11:58 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main() {
	std::string sArray[] = {"cat", "dog", "mouse"};
	int iArray[] = {1, 2, 3, 4};
	
	iter(sArray, 3, print<std::string>);
	iter(iArray, 4, print<int>);
}
