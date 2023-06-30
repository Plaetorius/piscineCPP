/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 18:11:18 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/26 19:09:46 by tgernez          ###   ########.fr       */
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
	for (int i = 0; i < INVENTORY_SIZE; i++)
		this->_inventory[i] = NULL;
	this->_items_count = 0;
	this->_trash = NULL;
	this->_trash_count = 0;
}

Character::Character(const Character &obj)
{
	std::cout << "Copy Character constructor called" << std::endl;
	this->_name = obj._name;
	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		if (obj._inventory[i] != NULL)
    		this->_inventory[i] = obj._inventory[i]->clone();
	}
	this->_items_count = obj._items_count;
	this->_trash = obj._trash;
	this->_trash_count = obj._trash_count;
}

Character& Character::operator=(const Character &rhs)
{
	std::cout << "Character Assignment Operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_name = rhs._name;
	// for (int i = 0; i < INVENTORY_SIZE; i++)
	// {
	// 	if (this->_inventory[i])
	// 		delete this->_inventory[i];
	// 	this->_inventory[i] = NULL;
	// }
	// Probbly useless because the desctructor will be called
	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		if (rhs._inventory[i] != NULL)
    		this->_inventory[i] = rhs._inventory[i]->clone();

	}
	this->_items_count = rhs._items_count;
	this->_trash = rhs._trash;
	this->_trash_count = rhs._trash_count;
	return (*this);
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		if (this->_inventory[i] != NULL)
			delete _inventory[i];
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