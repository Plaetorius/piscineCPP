/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 11:42:42 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/24 22:04:21 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>
#include <string>

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	this->_name = "defaultScavTrap";
	this->_hp = 100;
	this->_ep = 50;
	this->_ad = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap String constructor called" << std::endl;
	this->_hp = 100;
	this->_ep = 50;
	this->_ad = 20;
}

ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	this->_hp = obj._hp;
	this->_ep = obj._ep;
	this->_ad = obj._ad;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &rhs)
{
	std::cout << "ScavTrap Assignment Operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	ClapTrap::operator=(rhs);
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
	if (_ep < 1 || _hp <  1)
	{
		std::cout << _name << " doesn't have enough energy or health points to attack..." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << _name
		<< " attacks " << target
		<< ", causing " << _ad
		<< " points of damage!"
		<< std::endl; 
	_ep--;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if (_hp <  1)
	{
		_hp = 0;
		std::cout << _name << " is already destroyed!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << _name
		<< " takes " << amount
		<< " points of damage!"
		<< std::endl;
	_hp -= amount;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if (_ep < 1 || _hp < 1)
	{
		std::cout << _name << " doesn't have enough energy or health points to repair itself..." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << _name
		<< " repairs itself, regaining " << amount
		<< " points of health!"
		<< std::endl;
	_hp += amount;
	_ep--;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap "
		<< _name << " enters gate guardian mode!"
		<< std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}