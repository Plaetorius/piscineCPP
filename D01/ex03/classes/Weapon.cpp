/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 20:39:11 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/14 17:12:42 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/*
	The second const is used to guarantee the 'const'ness of the function, thus
	allowing it to be called on const Weapon variables
*/

const std::string& Weapon::getType() const
{
	return type;
}

void setType(std::string weapon_type);