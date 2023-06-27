/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 18:09:27 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/27 20:53:11 by tgernez          ###   ########.fr       */
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
	Cat	independant_cat;

	
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

	// Cats[0]->change_idea("bonjour", 0);
	// std::cout << "Cats[0] Ideas" << std::endl;
	// Cats[0]->display_ideas();

	independant_cat = *Cats[0];
	// std::cout << "Independant Cat Ideas" << std::endl;
	// independant_cat->display_ideas();
	
	// std::cout << "*****************Shallow Copy Test*****************" << std::endl;
	// independant_cat->change_idea("shallow ou quoi", 1);
	// std::cout << "Cats[0] Ideas" << std::endl;
	// Cats[0]->display_ideas();
	// std::cout << "Independant Cat Ideas" << std::endl;
	// independant_cat->display_ideas();

	for (int i = 0; i < 5; ++i)
	{
		delete Cats[i];
		delete Dogs[i];
	}

}