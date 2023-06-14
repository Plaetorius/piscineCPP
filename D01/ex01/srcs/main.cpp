/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:31:05 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/13 21:32:13 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main()
{
	int				N = 5;
	std::string		name = "Bobs";
	Zombie*			horde = zombieHorde(N, name);
	
	if (!horde)
	{
		std::cout << "Horde is nullptr" << std::endl;
		return (1);
	}
	for (int i = 0; i < N; ++i)
	{
		horde[i].announce();
	}
	delete[] horde;
	return (0);
}