/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 20:39:08 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/13 21:20:30 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie* horde = new Zombie[N];

	if (!horde)
	{
		std::cout << "Failed allocation" << std::endl;
		return (nullptr);
	}
	for (int i = 0; i < N; ++i)
	{
		horde[i] = Zombie(name);
	}
	return (horde);	
}