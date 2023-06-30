/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 18:09:27 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/28 09:31:07 by tgernez          ###   ########.fr       */
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
	Cat	operator_cat;
	
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

	std::cout << "*****************Operator= Test*****************" << std::endl;
	Cats[0]->changeIdea("bonjour", 0);
	std::cout << "Cats[0] Ideas" << std::endl;
	Cats[0]->displayIdeas();
	operator_cat = *Cats[0];
	std::cout << "Operator Cat Ideas" << std::endl;
	operator_cat.displayIdeas();
	
	std::cout << "*****************Shallow Copy Test (operator=)*****************" << std::endl;
	operator_cat.changeIdea("shallow ou quoi", 1);
	std::cout << "Cats[0] Ideas" << std::endl;
	Cats[0]->displayIdeas();
	std::cout << "Operator Cat Ideas" << std::endl;
	operator_cat.displayIdeas();

	std::cout << "*****************Copy Constructor Test*****************" << std::endl;
	Cats[1]->changeIdea("HIIII", 0);
	std::cout << "Cats[1] Ideas" << std::endl;
	Cats[1]->displayIdeas();
	Cat copy_cat(*Cats[1]);
	std::cout << "Copy Cat Ideas" << std::endl;
	copy_cat.displayIdeas();
	
	std::cout << "*****************Shallow Copy Test (Copy Constructor)*****************" << std::endl;
	copy_cat.changeIdea("shallow ou bien?", 1);
	std::cout << "Cats[1] Ideas" << std::endl;
	Cats[1]->displayIdeas();
	std::cout << "Copy Cat Ideas" << std::endl;
	copy_cat.displayIdeas();

	for (int i = 0; i < 5; ++i)
	{
		delete Cats[i];
		delete Dogs[i];
	}
}