/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 18:20:06 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/28 09:19:45 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>

Dog::Dog()
{
	std::cout << "Default Dog constructor called" << std::endl;
	_type = "Dog";
	_brain = new Brain;
}

Dog::Dog(const Dog &obj) : AAnimal(obj)
{
	this->_brain = new Brain(*obj._brain);
	std::cout << "Copy Dog constructor called" << std::endl;
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
	delete this->_brain;
	this->_type = rhs._type;
	this->_brain = new Brain(*rhs._brain);
	return *this;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::changeIdea(std::string idea, int i)
{
	this->_brain->changeIdea(idea, i);
}

void	Dog::displayIdeas()
{
	this->_brain->displayIdeas();
}