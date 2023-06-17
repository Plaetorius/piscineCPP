/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 17:53:13 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/17 20:00:24 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"
#include <iostream>
#include <string>

Cat::Cat()
{
	std::cout << "Default Cat constructor called" << std::endl;
	_type = "Cat";
}

Cat::Cat(const Cat &obj)
{
	std::cout << "Copy Cat constructor called" << std::endl;
	this->_type = obj._type;
}

void Cat::makeSound(void) const
{
	std::cout << "*meow meow*" << std::endl;
}

Cat& Cat::operator=(const Cat &rhs)
{
	std::cout << "Cat Assignment operator called" << std::endl;
	Animal::operator=(rhs);
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}