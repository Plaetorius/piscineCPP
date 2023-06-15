/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 20:39:11 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/14 18:50:41 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>
#include <iostream>

/*
	The second const is used to guarantee the 'const'ness of the function, thus
	allowing it to be called on const Weapon variables
*/

Weapon::Weapon(std::string type) : type(type) {}

const std::string& Weapon::getType() const
{
	return type;
}

void Weapon::setType(std::string new_type)
{
	type = new_type;
}

Weapon::~Weapon (void) {}