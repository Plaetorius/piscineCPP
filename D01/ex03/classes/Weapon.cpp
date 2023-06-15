/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 20:39:11 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/15 15:45:08 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>
#include <iostream>

/*
	The second const of getType() is used to guarantee the 'const'ness of the function, thus
	allowing it to be called on const Weapon variables
*/

Weapon::Weapon(std::string type) : type(type) {}

const std::string& Weapon::getType() const
{
	const std::string& string_ref = this->type;
	return string_ref;
}

void Weapon::setType(const std::string& new_type)
{
	this->type = new_type;
}

Weapon::~Weapon (void) {}