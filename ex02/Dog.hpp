/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 10:25:16 by osarsari          #+#    #+#             */
/*   Updated: 2023/12/21 12:11:40 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{

public:
	// Constructors and destructors
	Dog(void);
	Dog(Dog const &src);
	virtual ~Dog(void);

	// Copy constructor
	Dog &operator=(Dog const &rhs);

	// Actions
	void makeSound(void) const;

private:
	Brain *_brain;
};

#endif