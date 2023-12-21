/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 08:27:21 by osarsari          #+#    #+#             */
/*   Updated: 2023/12/21 11:35:46 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include "Colors.hpp"
#include <iostream>

class Animal
{

public:
	// Constructors and destructors
	Animal(void);
	Animal(Animal const &src);
	virtual ~Animal(void);

	// Copy constructor
	Animal &operator=(Animal const &rhs);

	// Getter
	std::string getType(void) const;

	// Actions
	virtual void makeSound(void) const;

protected:
	std::string _type;
};

#endif