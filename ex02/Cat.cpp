/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 09:59:24 by osarsari          #+#    #+#             */
/*   Updated: 2023/12/21 12:18:42 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructors and destructors

Cat::Cat(void) : Animal()
{
	std::cout << YELLOW << "Cat constructor called" << RESET << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
	return;
}

Cat::Cat(Cat const &src) : Animal(src)
{
	std::cout << YELLOW << "Cat copy constructor called" << RESET << std::endl;
	this->_brain = new Brain(*src.getBrain());
	return;
}

Cat::~Cat(void)
{
	std::cout << YELLOW << "Cat destructor called" << RESET << std::endl;
	delete this->_brain;
	return;
}

// Copy constructor

Cat &Cat::operator=(Cat const &rhs)
{
	std::cout << YELLOW << "Cat assignation operator called" << RESET << std::endl;
	if (this != &rhs)
	{
		Animal::operator=(rhs);
		this->_brain = new Brain(*rhs.getBrain());
	}
	return *this;
}

// Getter

Brain *Cat::getBrain(void) const
{
	return this->_brain;
}

// Actions

void Cat::makeSound(void) const
{
	std::cout << YELLOW << "Meow" << RESET << std::endl;
	return;
}
