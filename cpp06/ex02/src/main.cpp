/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:34:10 by amakela           #+#    #+#             */
/*   Updated: 2024/11/15 18:45:26 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void identify (Base& ref) {

}

void identify(*Base ptr) {
	
} 

Base* generate() {
	switch(rand() % 3) {
		case 0:
			return new A;
		case 1:
			return new B;
		case 2:
			return new C;
	}
}

int main() {
	srand(time(0));
	
	Base* ptr = generate();
}
