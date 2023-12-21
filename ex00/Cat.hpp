/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 09:53:18 by osarsari          #+#    #+#             */
/*   Updated: 2023/12/21 10:20:41 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"

class Cat : public Animal
{

public:
	// Constructors and destructors
	Cat(void);
	Cat(Cat const &src);
	~Cat(void);

	// Copy constructor
	Cat &operator=(Cat const &rhs);

	// Actions
	void makeSound(void) const;
};

#endif