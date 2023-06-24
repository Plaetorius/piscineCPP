/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 11:18:31 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/24 12:17:36 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
#include <string>

DiamondTrap::DiamondTrap()
{
	std::cout << "Default DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj)
{
	std::cout << "Copy DiamondTrap constructor called" << std::endl;
	(void)obj;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &rhs)
{
	std::cout << "DiamondTrap Assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
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
}

void DiamondTrap::whoAmI(void)
{
	std::cout << this->_name << std::endl;
	std::cout << FragTrap::getName() << std::endl;
}