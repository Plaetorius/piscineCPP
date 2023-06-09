/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 17:53:13 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/28 09:32:50 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

Cat::Cat()
{
	std::cout << "Default Cat constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain;
}

Cat::Cat(const Cat &obj) : Animal(obj)
{
	std::cout << "Copy Cat constructor called" << std::endl;
	this->_brain = new Brain(*obj._brain);
}

void Cat::makeSound(void) const
{
	std::cout << "*meow meow*" << std::endl;
}

Cat& Cat::operator=(const Cat &rhs)
{
	std::cout << "Cat Assignment Operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	delete this->_brain;
	this->_type = rhs._type;
	this->_brain = new Brain(*rhs._brain);
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}

void	Cat::changeIdea(std::string idea, int i)
{
	this->_brain->changeIdea(idea, i);
}

void	Cat::displayIdeas()
{
	this->_brain->displayIdeas();
}
