/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 18:11:18 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/25 19:29:11 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Character.hpp"
#include <iostream>

Character::Character()
{
	std::cout << "Default Character constructor called" << std::endl;
	this->_name = "default";
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	this->_items_count = 0;
}

Character::Character(const Character &obj)
{
	std::cout << "Copy Character constructor called" << std::endl;
	if (this != &obj)
	this->_name = obj._name;
	for (int i = 0; i < obj._items_count; i++)
    	this->_inventory[i] = obj._inventory[i]->clone();
	this->_items_count = obj._items_count;
}

Character& Character::operator=(const Character &rhs)
{
	std::cout << "Character Assignment Operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_name = rhs._name;
	for (int i = 0; i < this->_items_count; i++)
		delete this->_inventory[i];
	for (int i = 0; i < rhs._items_count; i++)
    	this->_inventory[i] = rhs._inventory[i]->clone();
	this->_items_count = rhs._items_count;
	return (*this);
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < this->_items_count; i++)
	{
		delete 
	}
}

const std::string &Character::getName() const
{
	return (this->_name);
}
void Character::equip(AMateria* m)
{
	
}
void Character::unequip(int idx) 
{
	
}
void Character::use(int idx, ICharacter& target)
{
	
}