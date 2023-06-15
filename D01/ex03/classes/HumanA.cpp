/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 20:39:11 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/14 18:26:40 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
# include <string>
# include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon) {}

void	HumanA::attack(void)
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

HumanA::~HumanA(void) {}
