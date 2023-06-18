/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 00:21:36 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/19 00:21:37 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
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
	std::cout << "Character Assignment operator called" << std::endl;
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
}