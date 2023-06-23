/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:31:05 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/23 21:51:54 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main()
{
	Zombie *my_zombie = newZombie("Bob");

	if (my_zombie == NULL)
		return (1);
	my_zombie->announce();
	delete my_zombie;
	randomChump("John");
	return (0);
}