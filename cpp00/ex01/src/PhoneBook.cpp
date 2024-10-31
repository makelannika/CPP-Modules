/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 23:37:21 by amakela           #+#    #+#             */
/*   Updated: 2024/08/14 20:50:15 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

std::string	PhoneBook::trunc_info(std::string info) {
	if (info.length() > 10)
		return (info.substr(0, 9) + ".|");
	else
		return (info + "|");
}

void    PhoneBook::get_contacts(int count) {
	std::string	info;

	for (int i = 0; i < count; i++) {
		std::cout << std::setw(11) << i + 1 << "|";
		info = contacts[i].get_info("first name");
		std::cout << std::setw(11) << trunc_info(info);
		info = contacts[i].get_info("last name");
		std::cout << std::setw(11) << trunc_info(info);
		info = contacts[i].get_info("nickname");
		std::cout << std::setw(11) << trunc_info(info) << std::endl;
	}
}

void    PhoneBook::get_contact(int idx) {
	std::cout << contacts[idx].get_info("first name") << std::endl;
	std::cout << contacts[idx].get_info("last name") << std::endl;
	std::cout << contacts[idx].get_info("nickname") << std::endl;
	std::cout << contacts[idx].get_info("number") << std::endl;
	std::cout << contacts[idx].get_info("darkest secret") << std::endl;
}

int	PhoneBook::add_contact_info(std::string type, std::string info, int idx) {
	return (contacts[idx].set_info(type, info));
}
