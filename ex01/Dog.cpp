/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 10:26:09 by osarsari          #+#    #+#             */
/*   Updated: 2023/12/21 12:18:52 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Constructors and destructors

Dog::Dog(void) : Animal()
{
	std::cout << PURPLE << "Dog constructor called" << RESET << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
	return;
}

Dog::Dog(Dog const &src) : Animal(src)
{
	std::cout << PURPLE << "Dog copy constructor called" << RESET << std::endl;
	this->_brain = new Brain(*src._brain);
	return;
}

Dog::~Dog(void)
{
	std::cout << PURPLE << "Dog destructor called" << RESET << std::endl;
	delete this->_brain;
	return;
}

// Copy constructor

Dog &Dog::operator=(Dog const &rhs)
{
	std::cout << PURPLE << "Dog assignation operator called" << RESET << std::endl;
	if (this != &rhs)
	{
		Animal::operator=(rhs);
		this->_brain = new Brain(*rhs._brain);
	}
	return *this;
}

// Actions

void Dog::makeSound(void) const
{
	std::cout << PURPLE << "Woof" << RESET << std::endl;
	return;
}
