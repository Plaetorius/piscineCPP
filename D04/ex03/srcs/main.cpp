/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 00:21:57 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/27 12:08:40 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

/*
	You are not supposed to be able to take items out of the trash
*/

int main(void)
{
	Cure*		cure_1;
	Ice*		ice_1;
	Cure*		cure_2;
	Ice*		ice_2;
	Cure*		cure_3;
	Character 	player_1("Bob");

	cure_1 = new Cure("Cure 1");
	ice_1 = new Ice("Ice 1");
	cure_2 = new Cure("Cure 2");
	ice_2 = new Ice("Ice 2");
	cure_3 = new Cure("Cure 3");

	player_1.equip(cure_1);
	player_1.equip(ice_1);
	player_1.equip(cure_2);
	player_1.equip(ice_2);
	player_1.equip(cure_3);
	player_1.display_inventory();
	player_1.unequip(4);
	player_1.unequip(-1);
	player_1.unequip(100000000);
	player_1.equip(NULL);
	player_1.display_inventory();
	player_1.display_trash();
	player_1.empty_inventory();
	player_1.display_inventory();
	player_1.display_trash();

	Character	player_2("Jack");
	Cure*		cure_4;
	Ice*			ice_4;
	Cure*		cure_5;
	Ice*			ice_5;

	cure_4 = new Cure("Cure 4");
	ice_4 = new Ice("Ice 4");
	cure_5 = new Cure("Cure 5");
	ice_5 = new Ice("Ice 5");

	player_1.equip(cure_4);
	player_1.equip(ice_4);
	player_2.equip(cure_5);
	player_2.equip(ice_5);
	player_1.use(2, player_2);
	// player_1.use(3, player_2);
	return 0;
}