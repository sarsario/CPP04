/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 09:41:39 by osarsari          #+#    #+#             */
/*   Updated: 2024/02/14 16:10:02 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Constructors and destructors
Animal::Animal(void)
{
	std::cout << INDIGO << "Animal constructor called" << RESET << std::endl;
}

Animal::Animal(Animal const &src)
{
	std::cout << INDIGO << "Animal copy constructor called" << RESET
			  << std::endl;
	*this = src;
}

Animal::~Animal(void)
{
	std::cout << INDIGO << "Animal destructor called" << RESET << std::endl;
}

// Copy constructor
Animal &Animal::operator=(Animal const &rhs)
{
	std::cout << INDIGO << "Animal assignation operator called" << RESET
			  << std::endl;
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
	std::cout << INDIGO << "Animal sound" << RESET << std::endl;
}
