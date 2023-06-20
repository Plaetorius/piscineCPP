/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 00:21:38 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/20 18:39:05 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

Cure::Cure()
{
	std::cout << "Default Cure constructor called" << std::endl;\
	this->_type = "cure";
}

Cure::Cure(const Cure &obj)
{
	std::cout << "Copy Cure constructor called" << std::endl;
	this->_type = obj._type;
}

Cure& Cure::operator=(const Cure &rhs)
{
	std::cout << "Cure Assignment Operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	return (*this);
}

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
}

Cure::Cure(const std::string &type)
{
	std::cout << "String Cure constructor called" << std::endl;
	this->_type = type;
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target._name << "'s wounds *" << std::endl;
}

