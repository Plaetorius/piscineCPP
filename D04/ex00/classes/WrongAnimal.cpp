/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 17:08:25 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/17 19:51:01 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <string>
#include <iostream>

WrongAnimal::WrongAnimal() : _type("")
{
	std::cout << "Default WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	std::cout << "Copy WrongAnimal constructor called" << std::endl;
	this->_type = obj._type;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "*wrong weird noises*" << std::endl;
}

const std::string WrongAnimal::getType(void) const
{
	return this->_type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &rhs)
{
	std::cout << "Assignation WrongAnimal Operator called" << std::endl;
	this->_type = rhs._type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}