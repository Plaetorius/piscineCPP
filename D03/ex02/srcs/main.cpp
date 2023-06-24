/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 11:42:35 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/24 22:05:34 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <string>

int main() 
{
    FragTrap robot("Garf");

    robot.attack("Enemy");
    robot.takeDamage(10);
    robot.beRepaired(5);
    robot.highFivesGuys();
	robot.takeDamage(100);
	robot.beRepaired(5);
	robot.attack("Enemy");
	robot.takeDamage(100);
    return 0;
}