/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 18:09:27 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/17 22:16:18 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main()
{
	Animal* animals[10];
	
	for (int i = 0; i < 5; ++i)
		animals[i] = new Cat();

	for (int i = 5; i < 10; ++i)
		animals[i] = new Dog();

	for (int i = 0; i < 10; ++i)
	{
		std::cout << animals[i]->getType() << " " << std::endl;
		animals[i]->makeSound();
	}

	for (int i = 0; i < 10; ++i)
		delete animals[i];

	return 0;
}