/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 12:08:17 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/25 20:37:51 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <locale>
#include <string>

void	upper_arguments(int ac, char *av[])
{
	for (int i = 1; i < ac; ++i)
	{
		std::string arg(av[i]);
		std::locale loc;
		for (std::string::size_type j = 0; j < arg.length(); ++j)
		{
			arg[j] = std::toupper(arg[j], loc);
		}
		std::cout << arg;
	}
	std::cout << std::endl;
}

int	main(int ac, char *av[])
{
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0 ;
	}
	upper_arguments(ac, av);
	return 0;
}