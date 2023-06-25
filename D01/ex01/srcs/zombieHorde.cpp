/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 20:39:08 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/25 18:06:58 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


// CALLS DESTRUCTOR TWICE PER ZOMBIE

// Zombie* zombieHorde(int N, std::string name)
// {
// 	Zombie* horde = new Zombie[N];

// 	if (!horde)
// 	{
// 		std::cout << "Failed allocation" << std::endl;
// 		return (NULL);
// 	}
// 	for (int i = 0; i < N; ++i)
// 	{
// 		horde[i] = Zombie(name);
// 	}
// 	return (horde);	
// }


Zombie* zombieHorde(int N, std::string name)
{
	Zombie* horde = static_cast<Zombie*>(operator new[](N * sizeof(Zombie)));

	if (!horde)
	{
		std::cout << "Failed allocation" << std::endl;
		return (NULL);
	}
	for (int i = 0; i < N; ++i)
	{
		new(&horde[i]) Zombie(name);
	}
	return (horde);	
}
