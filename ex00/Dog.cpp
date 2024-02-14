/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 10:26:09 by osarsari          #+#    #+#             */
/*   Updated: 2024/02/14 15:55:19 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Constructors and destructors

Dog::Dog(void) : Animal("Dog")
{
	std::cout << PURPLE << "Dog constructor called" << RESET << std::endl;
}

Dog::Dog(Dog const &src) : Animal(src)
{
	std::cout << PURPLE << "Dog copy constructor called" << RESET << std::endl;
	*this = src;
}

Dog::~Dog(void)
{
	std::cout << PURPLE << "Dog destructor called" << RESET << std::endl;
}

// Copy constructor

Dog &Dog::operator=(Dog const &rhs)
{
	std::cout << PURPLE << "Dog assignation operator called" << RESET
			  << std::endl;
	if (this != &rhs)
		Animal::operator=(rhs);
	return *this;
}

// Actions

void Dog::makeSound(void) const
{
	std::cout << PURPLE << "Woof" << RESET << std::endl;
	return;
}
