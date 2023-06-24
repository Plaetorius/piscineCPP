/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 11:42:35 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/24 22:06:50 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

int main()
{
    ClapTrap ct1("Alice");
    ClapTrap ct2("Bob");

    ct1.attack("Bob");
    ct2.takeDamage(3);
    ct2.beRepaired(5);

    ct2.attack("Alice");
    ct1.takeDamage(3);
    ct1.beRepaired(5);
	ct1.takeDamage(100);
	ct1.takeDamage(1);
	ct1.beRepaired(10);

    return 0;
}