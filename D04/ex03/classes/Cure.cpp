/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 00:21:38 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/19 00:39:55 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure()
{
	std::cout << "Default Cure constructor called" << std::endl;
}

Cure::Cure(const Cure &obj)
{
	std::cout << "Copy Cure constructor called" << std::endl;
}

Cure& Cure::operator=(const Cure &rhs)
{
	std::cout << "Cure Assignment operator called" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
}

Cure::AMateria(const std::string &type)
{
	std::cout << "String Cure constructor called" << std::endl;
	this->_type = type;
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target._name << "'s wounds *" << std::endl;
}

