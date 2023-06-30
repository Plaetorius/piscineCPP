/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 00:21:40 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/27 16:29:48 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

Ice::Ice()
{
	std::cout << "Default Ice constructor called" << std::endl;
	this->_type = "ice";
	this->_next = NULL;
}

Ice::Ice(const Ice &obj)
{
	std::cout << "Copy Ice constructor called" << std::endl;
	this->_type = obj._type;
	this->_next = obj._next;
}

Ice& Ice::operator=(const Ice &rhs)
{
	std::cout << "Ice Assignment Operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	this->_next = rhs._next;
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
}

Ice::Ice(const std::string &type)
{
	std::cout << "String Cure constructor called" << std::endl;
	this->_type = type;
	this->_next = NULL;
}

Ice* Ice::clone() const
{
	std::cout << "Ice clone called" << std::endl;
	return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
