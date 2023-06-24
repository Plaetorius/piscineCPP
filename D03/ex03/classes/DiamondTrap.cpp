/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 11:18:31 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/24 17:13:03 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
#include <string>

DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name"), FragTrap(), ScavTrap()
{
	std::cout << "Default DiamondTrap constructor called" << std::endl;
	this->_name = "Default";
	this->_hp = FragTrap::_hp;
	this->_ep = ScavTrap::_ep;
	this->_ad = ScavTrap::_ad;
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj)
{
	std::cout << "Copy DiamondTrap constructor called" << std::endl;
	this->_name = obj._name;
	this->_hp = obj._hp;
	this->_ep = obj._ep;
	this->_ad = obj._ad;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &rhs)
{
	std::cout << "DiamondTrap Assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_name = rhs._name;
	this->_hp = rhs._hp;
	this->_ep = rhs._ep;
	this->_ad = rhs._ad;
	return (*this);

}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name) 
{
	std::cout << "String DiamondTrap constructor called" << std::endl;
	this->_name = name;
	_hp = FragTrap::_hp;  
    _ep = ScavTrap::_ep;  
    _ad = FragTrap::_ad;  
}

void DiamondTrap::whoAmI(void)
{
	std::cout << this->_name << std::endl;
	std::cout << FragTrap::getName() << std::endl;
}

void DiamondTrap::attack(std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::getStats(void)
{
	std::cout << "======Stats=====" << std::endl;
	std::cout << "Name: " << this->_name << std::endl;
	std::cout << "HP: " << this->_hp << std::endl;
	std::cout << "ED: " << this->_ep << std::endl;
	std::cout << "AD: " << this->_ad << std::endl;
}