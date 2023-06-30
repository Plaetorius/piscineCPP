/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 18:11:18 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/27 14:58:49 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Character.hpp"
#include <iostream>

/*
	Characters don't copy each other's trash, because the items left on the floor
	can be managed as we want to.
	Moreover, as a trash is useless, it doesn't harm the code or any other process.
	Items can't be used / equiped / unequiped by any Character when trashed.
*/
 
Character::Character()
{
	std::cout << "Default Character constructor called" << std::endl;
	this->_name = "default";
	for (int i = 0; i < INVENTORY_SIZE; i++)
		this->_inventory[i] = NULL;
	this->_trash = NULL;
}

Character::Character(const Character &obj)
{
	std::cout << "Copy Character constructor called" << std::endl;
	this->_name = obj._name;
	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		if (obj._inventory[i] != NULL)
    		this->_inventory[i] = obj._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
	this->_trash = NULL;
}

Character& Character::operator=(const Character &rhs)
{
	std::cout << "Character Assignment Operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_name = rhs._name;
	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		if (this->_inventory[i])
		{
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
		if (rhs._inventory[i] != NULL)
    		this->_inventory[i] = rhs._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
	this->_trash = NULL;
	return (*this);
}

Character::~Character()
{
	AMateria *tmp_trash;

	std::cout << "Character destructor called" << std::endl;
	
	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		if (this->_inventory[i] != NULL)
			delete _inventory[i];
	}
	
	while (this->_trash != NULL)
	{
		tmp_trash = this->_trash;
		_trash = _trash->_next;
		if (tmp_trash)
			delete tmp_trash;		
	}
}

Character::Character(std::string name)
{
	std::cout << "String Character constructor called" << std::endl;
	this->_name = name;
	for (int i = 0; i < INVENTORY_SIZE; i++)
		this->_inventory[i] = NULL;
	this->_trash = NULL;
}

const std::string &Character::getName() const
{
	return (this->_name);
}
void Character::equip(AMateria* m)
{
	int first_free = -1;

	if (m == NULL)
	{
		std::cout << "Invalid materia!" << std::endl;
		return ;
	}
	if (count_items() == INVENTORY_SIZE)
	{
		std::cout << "Inventory is already full! Can't equip " << m->getType() << "!" << std::endl;
		push_trash(-1, m);
		return ;
	}
	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		if (this->_inventory[i] == NULL && first_free == -1)
			first_free = i;
		if (this->_inventory[i] == m)
		{
			std::cout << "Item " << m->getType() <<" is already equiped!" << std::endl;
			return ;
		}	
	}
	this->_inventory[first_free] = m;
	std::cout << "Equiped " << m->getType() << " in slot " << first_free << std::endl;
}

/*
	Inventory slots couting starts at 0
*/
void Character::unequip(int idx) 
{
	if (check_slot(idx) == false)
		return ;
	std::cout << "Unequiped " << this->_inventory[idx]->getType()
			<< ", previously stored in slot " << idx << std::endl;
	push_trash(idx, this->_inventory[idx]);
}

/*
	Using a reference here as a lot of interest.
	One of the main benefit here is that, as a reference can't be NULL / empty,
	there is no need to check whether the reference is correct or not
*/
void Character::use(int idx, ICharacter& target)
{
	if (check_slot(idx) == false)
		return ;
	if (this->_inventory[idx] == NULL)
	{
		std::cout << "The slot " << idx << " is empty! " << this->getName()
			<< " can't do anything!" << std::endl;
		return ;
	}
	std::cout << "Using " << this->_inventory[idx]->getType()
		<< " stored in slot " << idx << "!" << std::endl;
	this->_inventory[idx]->use(target);
	push_trash(idx, this->_inventory[idx]);
}

bool Character::check_slot(int idx)
{	if (!(0 <= idx && idx < INVENTORY_SIZE))
	{
		std::cout << idx << " isn't a correct inventory slot number!" << std::endl;
		return (false);
	}
	if (this->_inventory[idx] == NULL)
	{
		std::cout << idx << " is empty!" << std::endl;
		return (false);
	}
	return (true);
}

int Character::count_items()
{
	int items = 0;

	for (int i = 0; i < INVENTORY_SIZE; i++)
		items += this->_inventory[i] != NULL;
	return (items);
}

void Character::push_trash(int idx, AMateria *to_trash)
{
	AMateria *tmp_trash;
	
	tmp_trash = this->_trash;
	this->_trash = to_trash;
	if (to_trash) //Impossible but protection is good 
		to_trash->_next = tmp_trash;
	if (idx != -1)
		this->_inventory[idx] = NULL;
}

void Character::empty_inventory()
{
	for (int i = 0; i < INVENTORY_SIZE; i++)
		this->unequip(i);
}

/*
	Using geters to make sure that the variable isn't changed, as geters
	return copies/ references of the content
*/
void Character::display_inventory()
{
	std::cout << "===============================================" << std::endl;
	std::cout << "Inventory of " << this->getName() << ":" << std::endl;
	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		if (this->_inventory[i] == NULL)
			std::cout << i << ". Empty" << std::endl;
		else
			std::cout << i << ". " << this->_inventory[i]->getType() << std::endl;
	}
	std::cout << "===============================================" << std::endl;
}

void Character::display_trash()
{
	AMateria	*tmp_trash = this->_trash;
	int			i = 0;
	
	std::cout << "***********************************************" << std::endl;
	std::cout << "Trash of " << this->getName() << ":" << std::endl;
	while (tmp_trash != NULL)
	{
		std::cout << i++ << ". " << tmp_trash->getType() << std::endl;
		tmp_trash = tmp_trash->_next;	
	}
	std::cout << "***********************************************" << std::endl;
}
