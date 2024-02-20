/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 11:30:13 by osarsari          #+#    #+#             */
/*   Updated: 2024/02/14 16:23:20 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include "Colors.hpp"
#include <iostream>

class Brain
{

public:
	Brain(void);
	Brain(Brain const &src);
	~Brain(void);

	Brain &operator=(Brain const &rhs);

	// Getters and setters
	std::string *getIdeas(void);
	void setIdea(int index, std::string idea);

protected:
	std::string _ideas[100];
};

#endif