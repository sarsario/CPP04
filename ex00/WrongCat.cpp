/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 10:33:19 by osarsari          #+#    #+#             */
/*   Updated: 2024/02/14 15:58:56 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// Constructors and destructors

WrongCat::WrongCat(void) : WrongAnimal()
{
	std::cout << GREEN << "WrongCat constructor called" << RESET << std::endl;
	this->_type = "WrongCat";
	return;
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal(src)
{
	std::cout << GREEN << "WrongCat copy constructor called" << RESET
			  << std::endl;
	*this = src;
}

WrongCat::~WrongCat(void)
{
	std::cout << GREEN << "WrongCat destructor called" << RESET << std::endl;
}

// Copy constructor

WrongCat &WrongCat::operator=(WrongCat const &rhs)
{
	std::cout << GREEN << "WrongCat assignation operator called" << RESET
			  << std::endl;
	if (this != &rhs)
		WrongAnimal::operator=(rhs);
	return *this;
}

// Actions

void WrongCat::makeSound(void) const
{
	std::cout << GREEN << "Meow" << RESET << std::endl;
}
