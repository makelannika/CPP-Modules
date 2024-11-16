/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:34:10 by amakela           #+#    #+#             */
/*   Updated: 2024/11/16 21:06:58 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <string>
#include <iostream>

void identify (Base& ref) {
	try {
		A a = dynamic_cast<A&>(ref);
		std::cout << "reference to type A" << std::endl;
	} catch (std::exception& e) {}
	try {
		B b = dynamic_cast<B&>(ref);
		std::cout << "reference to type B" << std::endl;
	} catch (std::exception& e) {}
	try {
		C c = dynamic_cast<C&>(ref);
		std::cout << "reference to type C" << std::endl;
	} catch (std::exception& e) {}
}

void identify(Base* ptr) {
	if (dynamic_cast<A*>(ptr))
		std::cout << "pointer to type A" << std::endl;
	if (dynamic_cast<B*>(ptr))
		std::cout << "pointer to type B" << std::endl;
	if (dynamic_cast<C*>(ptr))
		std::cout << "pointer to type C" << std::endl;
	if (!dynamic_cast<A*>(ptr) && !dynamic_cast<B*>(ptr) && !dynamic_cast<C*>(ptr))
		std::cout << "not a type A, B or C" << std::endl;
}

Base* generate() {
	switch((rand() % 3)) {
		case 0:
			return new A;
		case 1:
			return new B;
		case 2:
			return new C;
	}
	return nullptr;
}

int main() {
	std::srand(time(0));

	for (int i = 0; i < 6; i++) {
		Base* ptr = generate();
		identify(ptr);
		identify(*ptr);
		std::cout << std::endl;
		delete ptr;
	}
	identify(nullptr);	
}
