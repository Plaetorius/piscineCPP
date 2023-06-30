/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 11:42:35 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/24 22:05:55 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <string>

int main() 
{
    ScavTrap robot("Garf");

    robot.attack("Enemy");
    robot.takeDamage(10);
    robot.beRepaired(5);
    robot.guardGate();
	robot.takeDamage(100);
	robot.beRepaired(5);
	robot.attack("Enemy");
	robot.takeDamage(100);

    return 0;
}