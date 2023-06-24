/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 11:42:35 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/24 12:16:48 by tgernez          ###   ########.fr       */
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

	robot.whoAmI();
    return 0;
}