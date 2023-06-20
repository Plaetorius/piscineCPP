/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 18:11:30 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/20 18:39:16 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include <iostream>

Character::Character()
{
	std::cout << "Default Character constructor called" << std::endl;
}

Character::Character(const Character &obj)
{
	std::cout << "Copy Character constructor called" << std::endl;
}

Character& Character::operator=(const Character &rhs)
{
	std::cout << "Character Assignment Operator called" << std::endl;
	if (this == &rhs)
		return (*this);
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
}