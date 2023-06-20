/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 18:20:06 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/20 18:41:09 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

Dog::Dog()
{
	std::cout << "Default Dog constructor called" << std::endl;
	_type = "Dog";
	_brain = new Brain;
}

Dog::Dog(const Dog &obj) : Animal(obj)
{
	std::cout << "Copy Dog constructor called" << std::endl;
	this->_brain = new Brain(*obj._brain);
}

void Dog::makeSound(void) const
{
	std::cout << "*woaf woaf*" << std::endl;
}

Dog& Dog::operator=(const Dog &rhs)
{
	std::cout << "Dog Assignment Operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	Animal::operator=(rhs);
	delete _brain;
	_brain = new Brain(*rhs._brain);
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}