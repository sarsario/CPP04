/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 08:27:21 by osarsari          #+#    #+#             */
/*   Updated: 2024/02/14 15:52:04 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#define PINK "\033[38;5;206m"
#define BLUE "\033[38;5;27m"
#define GREEN "\033[38;5;46m"
#define RED "\033[38;5;196m"
#define YELLOW "\033[38;5;226m"
#define CYAN "\033[38;5;51m"
#define PURPLE "\033[38;5;129m"
#define ORANGE "\033[38;5;202m"
#define GREY "\033[38;5;245m"
#define RESET "\033[0m"

#include <iostream>

class Animal
{

public:
	// Constructors and destructors
	Animal(void);
	Animal(Animal const &src);
	Animal(std::string type);
	virtual ~Animal(void);

	// Asignation operator
	Animal &operator=(Animal const &rhs);

	// Getter
	std::string getType(void) const;

	// Actions
	virtual void makeSound(void) const;

protected:
	std::string _type;
};

#endif