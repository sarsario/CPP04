/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 10:29:01 by osarsari          #+#    #+#             */
/*   Updated: 2023/12/21 10:29:54 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

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

class WrongAnimal
{

public:
	// Constructors and destructors
	WrongAnimal(void);
	WrongAnimal(WrongAnimal const &src);
	virtual ~WrongAnimal(void);

	// Copy constructor
	WrongAnimal &operator=(WrongAnimal const &rhs);

	// Getter
	std::string getType(void) const;

	// Actions
	void makeSound(void) const;

protected:
	std::string _type;
};

#endif