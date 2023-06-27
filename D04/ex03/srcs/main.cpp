/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 00:21:57 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/27 11:30:09 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

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
	player_1.display_inventory();
	player_1.display_trash();
	player_1.empty_inventory();
	player_1.display_inventory();
	player_1.display_trash();
	return 0;
}