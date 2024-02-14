/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 10:31:00 by osarsari          #+#    #+#             */
/*   Updated: 2024/02/14 15:57:30 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// Constructors and destructors

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal")
{
	std::cout << RED << "WrongAnimal constructor called" << RESET << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	std::cout << RED << "WrongAnimal copy constructor called" << RESET
			  << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << RED << "WrongAnimal destructor called" << RESET << std::endl;
}

// Copy constructor

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs)
{
	std::cout << RED << "WrongAnimal assignation operator called" << RESET
			  << std::endl;
	if (this != &rhs)
		this->_type = rhs.getType();
	return *this;
}

// Getter

std::string WrongAnimal::getType(void) const
{
	return this->_type;
}

// Actions

void WrongAnimal::makeSound(void) const
{
	std::cout << RED << "WrongAnimal sound" << RESET << std::endl;
}
