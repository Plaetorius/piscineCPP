/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 00:21:36 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/19 00:46:57 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include <iostream>

ICharacter::Character()
{
	std::cout << "Default Character constructor called" << std::endl;
}

ICharacter::Character(const Character &obj)
{
	std::cout << "Copy Character constructor called" << std::endl;
}

ICharacter& ICharacter::operator=(const ICharacter &rhs)
{
	std::cout << "Character Assignment operator called" << std::endl;
}

ICharacter::~Character()
{
	std::cout << "Character destructor called" << std::endl;
}