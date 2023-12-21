/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 10:32:42 by osarsari          #+#    #+#             */
/*   Updated: 2023/12/21 10:33:06 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
#define WRONGCAT_H

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

public:
	// Constructors and destructors
	WrongCat(void);
	WrongCat(WrongCat const &src);
	~WrongCat(void);

	// Copy constructor
	WrongCat &operator=(WrongCat const &rhs);

	// Actions
	void makeSound(void) const;
};

#endif