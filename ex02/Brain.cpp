/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 11:34:00 by osarsari          #+#    #+#             */
/*   Updated: 2023/12/21 11:37:23 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// Constructors and destructors

Brain::Brain(void)
{
	std::cout << GREY << "Brain constructor called" << RESET << std::endl;
	return;
}

Brain::Brain(Brain const &src)
{
	std::cout << GREY << "Brain copy constructor called" << RESET << std::endl;
	*this = src;
	return;
}

Brain::~Brain(void)
{
	std::cout << GREY << "Brain destructor called" << RESET << std::endl;
	return;
}

// Copy constructor

Brain &Brain::operator=(Brain const &rhs)
{
	std::cout << GREY << "Brain assignation operator called" << RESET << std::endl;
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	return *this;
}
