/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 17:08:25 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/17 19:43:56 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <string>
#include <iostream>

AAnimal::AAnimal() : _type("")
{
	std::cout << "Default AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &obj)
{
	std::cout << "Copy AAnimal constructor called" << std::endl;
	this->_type = obj._type;
}

const std::string AAnimal::getType(void) const
{
	return (this->_type);
}

AAnimal& AAnimal::operator=(const AAnimal &rhs)
{
	std::cout << "Assignation AAnimal Operator called" << std::endl;
	this->_type = rhs._type;
	return *this;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
}