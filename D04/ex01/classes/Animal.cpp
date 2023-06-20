/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 17:08:25 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/20 18:40:30 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <string>
#include <iostream>

Animal::Animal() : _type("")
{
	std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &obj)
{
	std::cout << "Copy Animal constructor called" << std::endl;
	this->_type = obj._type;
}

void Animal::makeSound(void) const
{
	std::cout << "*weird noises*" << std::endl;
}

const std::string Animal::getType(void) const
{
	return (this->_type);
}

Animal& Animal::operator=(const Animal &rhs)
{
	std::cout << "Assignation Animal Operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}