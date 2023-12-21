/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 09:41:39 by osarsari          #+#    #+#             */
/*   Updated: 2023/12/21 10:39:17 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Constructors and destructors
Animal::Animal(void)
{
	std::cout << BLUE << "Animal constructor called" << RESET << std::endl;
	return;
}

Animal::Animal(Animal const &src)
{
	std::cout << BLUE << "Animal copy constructor called" << RESET << std::endl;
	*this = src;
	return;
}

Animal::~Animal(void)
{
	std::cout << BLUE << "Animal destructor called" << RESET << std::endl;
	return;
}

// Copy constructor
Animal &Animal::operator=(Animal const &rhs)
{
	std::cout << BLUE << "Animal assignation operator called" << RESET << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

// Getter
std::string Animal::getType(void) const
{
	return this->_type;
}

// Actions
void Animal::makeSound(void) const
{
	std::cout << BLUE << "Animal sound" << RESET << std::endl;
	return;
}
