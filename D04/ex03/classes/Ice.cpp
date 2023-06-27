/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 00:21:40 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/27 12:06:48 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>
#include "Character.hpp"

Ice::Ice()
{
	std::cout << "Default Ice constructor called" << std::endl;
	this->_type = "ice";
}

Ice::Ice(const Ice &obj)
{
	std::cout << "Copy Ice constructor called" << std::endl;
	(void)obj;
}

Ice& Ice::operator=(const Ice &rhs)
{
	std::cout << "Ice Assignment Operator called" << std::endl;
	if (this == &rhs)
		return (*this);
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
