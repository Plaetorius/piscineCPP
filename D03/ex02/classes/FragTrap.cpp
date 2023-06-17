/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sc.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 11:42:42 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/17 16:25:23 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <string>

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap Default constructor called" << std::endl;
	this->_name = "defaultFragTrap";
	this->_hp = 100;
	this->_ep = 100;
	this->_ad = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap String constructor called" << std::endl;
	this->_hp = 100;
	this->_ep = 100;
	this->_ad = 30;
}

FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	this->_hp = obj._hp;
	this->_ep = obj._ep;
	this->_ad = obj._ad;
}

FragTrap& FragTrap::operator=(const FragTrap &rhs)
{
	std::cout << "FragTrap Assignment operator called" << std::endl;
	ClapTrap::operator=(rhs);
	return *this;
}

void FragTrap::attack(const std::string& target)
{
	if (_ep < 1 || _hp <  1)
	{
		std::cout << _name << "doesn't have enough energy points to attack..." << std::endl;
		return ;
	}
	std::cout << "FragTrap " << _name
		<< " attacks " << target
		<< ", causing " << _ad
		<< " points of damage!"
		<< std::endl; 
	_ep--;
}

void FragTrap::takeDamage(unsigned int amount)
{
	if (_hp <  1)
	{
		_hp = 0;
		std::cout << _name << "is already destroyed!" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << _name
		<< " takes " << amount
		<< " points of damage!"
		<< std::endl;
	_hp -= amount;
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (_ep < 1 || _hp < 1)
	{
		std::cout << _name << "doesn't have enough energy points to repair..." << std::endl;
		return ;
	}
	std::cout << "FragTrap " << _name
		<< " repairs itself, regaining " << amount
		<< " points of health!"
		<< std::endl;
	_hp += amount;
	_ep--;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap "
		<< _name << " asks for a high five \\(^ᵕ^ )/"
		<< std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}