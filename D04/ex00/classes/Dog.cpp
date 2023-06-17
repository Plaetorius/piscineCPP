/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 18:20:06 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/17 20:00:29 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"
#include <iostream>

Dog::Dog()
{
	std::cout << "Default Dog constructor called" << std::endl;
	_type = "Dog";
}

Dog::Dog(const Dog &obj)
{
	std::cout << "Copy Dog constructor called" << std::endl;
	this->_type = obj._type;
}

void Dog::makeSound(void) const
{
	std::cout << "*woaf woaf*" << std::endl;
}

Dog& Dog::operator=(const Dog &rhs)
{
	std::cout << "Dog Assignment operator called" << std::endl;
	Animal::operator=(rhs);
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}