/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 13:11:03 by amakela           #+#    #+#             */
/*   Updated: 2024/08/14 20:20:54 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

int	add_info(PhoneBook &phonebook, std::string type, int idx) {
	std::string input;
	
	while (true) {
		std::cout << "Enter " << type << ":" << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof())
			return (1);
		if (type == "first name") {
			if (!phonebook.add_contact_info(type, input, idx))
				return (0);
		} else if (type == "last name") {
			if (!phonebook.add_contact_info(type, input, idx))
				return (0);
		} else if (type == "nickname") {
			if (!phonebook.add_contact_info(type, input, idx))
				return (0);
		} else if (type == "darkest secret") {
			if (!phonebook.add_contact_info(type, input, idx))
				return (0);
		} else if (type == "number") {
			if (!phonebook.add_contact_info(type, input, idx))
				return (0);
		}
	}
}

int	add(PhoneBook &phonebook, int &i) {
	int			idx;
	
	idx = i % 8;
	if (add_info(phonebook, "first name", idx))
		return (1);
	if (add_info(phonebook, "last name", idx))
		return (1);
	if (add_info(phonebook, "nickname", idx))
		return (1);
	if (add_info(phonebook, "number", idx))
		return (1);
	if (add_info(phonebook, "darkest secret", idx))
		return (1);
	std::cout << std::endl;
	i++;
	return (0);
}

int	search(PhoneBook phonebook, int &i) {
	std::string	input;
	int			contacts;
	int			idx;
	
	if (i < 8)
		contacts = i;
	else
		contacts = 8;
	if (!contacts) {
		std::cout << "Phone book is empty" << std::endl << std::endl;
		return (0);
	}
	phonebook.get_contacts(contacts);
	while (true) {
		std::cout << "Enter the index of the contact you want to view:" << std::endl;
		std::getline(std::cin,input);
		if (std::cin.eof())
			return (1);
		if (!input.empty() && input.find_first_not_of("0123456789") == std::string::npos) {
			idx = stoi(input);
			if (idx >= 1 && idx <= contacts) {
				phonebook.get_contact(idx - 1);
				std::cout << std::endl;
				return (0);
			} else 
				std::cout << "contact at index " << idx  << " does not exist" << std::endl;
		} else
			std::cout << "index you entered is invalid" << std::endl;
	}
}

void	menu(void) {
	std::cout << "PHONE BOOK IS OPEN" << std::endl << std::endl;
	std::cout << "OPTIONS:" << std::endl;
	std::cout << "ADD    - add a contact" << std::endl;
	std::cout << "SEARCH - view contacts" << std::endl;
	std::cout << "EXIT   - close phone book" << std::endl << std::endl;
}

int	error() {
	std::cout << std::endl;
	std::cout << "PHONE BOOK IS CLOSED" << std::endl;
	return (1);
}

int main() {
    PhoneBook   phonebook;
    std::string input;
    int         i = 0;

	menu();
    while (true) {
		std::cout << "Enter an option:" << std::endl;
		std::getline(std::cin,input);
		if (std::cin.eof())
			return (error());
        if (input == "ADD") {
            if (add(phonebook, i))
				return (error());
		} else if (input == "SEARCH") {
            if (search(phonebook, i))
				return (error());
		} else if (input == "EXIT") {
            std::cout << "PHONE BOOK IS CLOSED" << std::endl;
            return (0);
        } else
			std::cout << std::endl << "valid options are: ADD/SEARCH/EXIT" << std::endl;
    }
    return (0);
}
