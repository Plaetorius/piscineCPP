/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 00:21:33 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/25 19:36:13 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include <iostream>
#include <string>

AMateria::AMateria()
{
	std::cout << "Default AMateria constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &obj)
{
	std::cout << "Copy AMateria constructor called" << std::endl;
	this->_type = obj._type;
}

AMateria& AMateria::operator=(const AMateria &rhs)
{
	std::cout << "AMateria Assignment Operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}

AMateria::AMateria(const std::string &type)
{
	std::cout << "String AMateria constructor called" << std::endl;
	this->_type = type;
}

const std::string &AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter &target)
{
	std::cout << this->_type << " is being thrown at " << target.getName() << std::endl;
}