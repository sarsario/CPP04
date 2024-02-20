/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osarsari <osarsari@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 08:26:50 by osarsari          #+#    #+#             */
/*   Updated: 2024/02/14 16:33:31 by osarsari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	Brain confused;

	confused.setIdea(0, "I am a dog");
	confused.setIdea(1, "I am a cat");
	confused.setIdea(2, "I am a human");

	const Animal *dog = new Dog();
	const Animal *cat = new Cat();

	delete dog;
	delete cat;

	std::cout << std::endl;

	Cat kitty;

	return 0;
}
