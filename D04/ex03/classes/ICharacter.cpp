/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 18:11:30 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/25 19:31:52 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include <iostream>

ICharacter::ICharacter()
{
	std::cout << "Default Character constructor called" << std::endl;
}

ICharacter::ICharacter(const ICharacter &obj)
{
	std::cout << "Copy Character constructor called" << std::endl;
	(void)obj;
}

ICharacter& ICharacter::operator=(const ICharacter &rhs)
{
	std::cout << "Character Assignment Operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	return (*this);
}

ICharacter::~ICharacter()
{
	std::cout << "Character destructor called" << std::endl;
}