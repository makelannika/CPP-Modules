/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:22:31 by amakela           #+#    #+#             */
/*   Updated: 2024/08/27 14:43:18 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain {
	private:
		std::string	ideas[100];
	
	public:
		Brain();
		~Brain();

		Brain(const Brain& obj);

		Brain&	operator=(const Brain& obj);
};

#endif
