/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 17:53:13 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/27 20:51:17 by tgernez          ###   ########.fr       */
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
		std::cout << "operator= is the same********************************" << std::endl;
		return (*this);
	}
	this->_type = rhs._type;
	std::cout << &this->_brain << " / " << rhs._brain << std::endl;
	this->_brain = new Brain(*rhs._brain);
	return (*this);
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::change_idea(std::string idea, int i)
{
	this->_brain->change_idea(idea, i);
}

void	Cat::display_ideas()
{
	this->_brain->display_ideas();
}

Brain*	Cat::get_brain()
{
	return (this->_brain);
}
