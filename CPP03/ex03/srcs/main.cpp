/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 11:42:35 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/24 22:01:35 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>
#include <string>

/*
	The Diamdond Problem ; problem about virtual inheritance
	-> Make the parents of the  class inherit virtually from the grandparent class
*/

int main() 
{
    DiamondTrap robot("Garf");
	std::string	enemy = "field";

	robot.whoAmI();
	// robot.getStats(); //For debug
	robot.highFivesGuys();
	robot.guardGate();
	robot.attack(enemy);
	robot.takeDamage(100);
	robot.takeDamage(1);
	robot.beRepaired(100);
	
	std::cout << "===============================" << std::endl << std::endl;
	enemy = "amel";
	DiamondTrap newRobot("Garg");
	newRobot.attack(enemy);
	newRobot.takeDamage(99);
	newRobot.beRepaired(100);
	newRobot.takeDamage(1);
	newRobot.whoAmI();
	std::cout << "===============================" << std::endl << std::endl;


    return 0;
}