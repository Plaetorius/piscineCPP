/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 00:21:57 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/27 16:25:56 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include <iostream>


/*
	You are not supposed to be able to take items out of the trash
*/

int main(void)
{
	/*
		MY TESTS
	*/
	std::cout << "-------------------------TEST 1-------------------------" << std::endl;

	Cure*			cure_1;
	Ice*			ice_1;
	Cure*			cure_2;
	Ice*			ice_2;
	Cure*			cure_3;
	Character	 	player_1("Bob");

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

	std::cout << "-------------------------TEST 2-------------------------" << std::endl;
	Character		player_2("Jack");
	Cure*			cure_4;
	Ice*			ice_4;
	Cure*			cure_5;
	Ice*			ice_5;

	cure_4 = new Cure("Cure 4");
	ice_4 = new Ice("Ice 4");
	cure_5 = new Cure("Cure 5");
	ice_5 = new Ice("Ice 5");

	player_1.equip(cure_4);
	player_1.equip(ice_4);
	player_2.equip(cure_5);
	player_2.equip(ice_5);
	player_1.use(1, player_2);
	player_1.use(3, player_2);
	player_1.display_inventory();
	player_1.display_trash();
	player_2.unequip(1);

	std::cout << "-------------------------TEST 3-------------------------" << std::endl;
	
	Character		player_3(player_1);
	Cure*			cure_tmp;

	cure_tmp = new Cure(*cure_5);
	player_3.display_inventory();
	player_3.display_trash();
	player_3.equip(cure_tmp);
	player_3.display_inventory();
	
	std::cout << "-------------------------TEST 4-------------------------" << std::endl;
	std::cout << "Original Content (player 2):" << std::endl;
	player_2.display_inventory();
	player_2.display_trash();

	Character		player_4 = player_2;
	Cure*			cure_op;

	cure_op = cure_1->clone();
	player_4.display_inventory();
	player_4.display_trash();
	player_4.equip(cure_op);
	player_4.display_inventory();
	player_4.use(1, player_3);
	player_4.display_inventory();
	player_4.display_trash();

	std::cout << "-------------------------TEST 5-------------------------" << std::endl;
	MateriaSource	materia_source_1 = MateriaSource();
	MateriaSource	materia_source_2;
	Character		player_5;
	Cure*			cure_mat_source;

	cure_mat_source = new Cure("P'tite cure la mmmmmmmmmmh");

	materia_source_1.learnMateria(cure_mat_source);
	materia_source_1.display_materias();
	AMateria* cure_materias;
	cure_materias = materia_source_1.createMateria("Cure Materia");
	player_5.equip(cure_materias);
	player_5.display_inventory();
	
	materia_source_2 = materia_source_1;
	materia_source_2.display_materias();
	
	// /*
	// 	TESTS FROM SUBJECT
	// */
	IMateriaSource* src = new MateriaSource();
	
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->display_materias();
	
	ICharacter* me = new Character("me");
	AMateria* tmp;
	
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;
	return 0;
}