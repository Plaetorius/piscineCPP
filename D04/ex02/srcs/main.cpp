/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 18:09:27 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/17 22:29:57 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main()
{
	Cat *Cats[5];
	Dog *Dogs[5];

	
	for (int i = 0; i < 5; ++i)
	{
		Cats[i] = new Cat();
		Dogs[i] = new Dog();
	}

	for (int i = 0; i < 5; ++i)
	{
		std::cout << Cats[i]->getType() << " " << std::endl;
		Cats[i]->makeSound();
		std::cout << Dogs[i]->getType() << " " << std::endl;
		Dogs[i]->makeSound();	
	}

	for (int i = 0; i < 5; ++i)
	{
		delete Cats[i];
		delete Dogs[i];
	}

	return 0;
}