/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 00:21:38 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/25 19:35:54 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

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

Cure* Cure::clone() const
{
	std::cout << "Cure clone called" << std::endl;
	return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

