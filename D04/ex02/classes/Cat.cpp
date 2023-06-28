/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 17:53:13 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/28 09:26:05 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>

Cat::Cat()
{
	std::cout << "Default Cat constructor called" << std::endl;
	_type = "Cat";
	_brain = new Brain;
}

Cat::Cat(const Cat &obj) : AAnimal(obj)
{
	this->_brain = new Brain(*obj._brain);
	std::cout << "Copy Cat constructor called" << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "*meow meow*" << std::endl;
}

Cat& Cat::operator=(const Cat &rhs)
{
	std::cout << "Cat Assignment Operator called" << std::endl;
	if (this == &rhs)
	{
		return (*this);
	}
	delete this->_brain;
	this->_type = rhs._type;
	this->_brain = new Brain(*rhs._brain);
	return (*this);
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::changeIdea(std::string idea, int i)
{
	this->_brain->changeIdea(idea, i);
}

void	Cat::displayIdeas()
{
	this->_brain->displayIdeas();
}
