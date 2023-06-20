/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 11:42:42 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/20 18:42:32 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
	_name = "defaultClapTrap";
	_hp = 10;
	_ep = 10;
	_ad = 0;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	this->_name = obj._name;
	this->_hp = obj._hp;
	this->_ep = obj._ep;
	this->_ad = obj._ad;
}
		
ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap String constructor called" << std::endl;
	_name = name;
	_hp = 10;
	_ep = 10;
	_ad = 0;
}

void ClapTrap::attack(const std::string& target)
{
	if (_ep < 1 || _hp <  1)
	{
		std::cout << _name << "doesn't have enough energy points to attack..." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name
		<< " attacks " << target
		<< ", causing " << _ad
		<< " points of damage!"
		<< std::endl; 
	_ep--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hp <  1)
	{
		_hp = 0;
		std::cout << _name << "is already destroyed!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name
		<< " takes " << amount
		<< " points of damage!"
		<< std::endl;
	_hp -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_ep < 1 || _hp < 1)
	{
		std::cout << _name << "doesn't have enough energy points to repair..." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name
		<< " repairs itself, regaining " << amount
		<< " points of health!"
		<< std::endl;
	_hp += amount;
	_ep--;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &rhs)
{
	std::cout << "ClapTrap Assignment Operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_name = rhs._name;
	this->_hp = rhs._hp;
	this->_ep = rhs._ep;
	this->_ad = rhs._ad;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}