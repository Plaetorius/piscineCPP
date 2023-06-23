/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:31:05 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/23 21:55:42 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);


/*
	In this module, we use OPERARTOR new[] and OPERATOR delete[] because it
	allows us to allocate raw memory (without calling the constructors of the
	objects)
*/
int main()
{
	int				N = 5;
	std::string		name = "Bobs";
	Zombie*			horde = zombieHorde(N, name);
	
	if (!horde)
	{
		std::cout << "Horde is NULL" << std::endl;
		return (1);
	}
	for (int i = 0; i < N; ++i)
	{
		horde[i].announce();
	}
	for (int i = 0; i < N; ++i)
	{
		horde[i].~Zombie();
	}
	operator delete[](horde);
	return (0);
}