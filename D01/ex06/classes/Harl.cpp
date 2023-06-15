/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 20:39:11 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/15 13:57:35 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

Harl::Harl(void) {}

void Harl::debug (void)
{
		std::cout << 
		"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" <<
		std::endl;
}

void Harl::info (void)
{
		std::cout << 
		"I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" <<
		std::endl;
}

void Harl::warning (void)
{
		std::cout <<
		"I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." <<
		std::endl;
}

void Harl::error (void)
{
		std::cout <<
		"This is unacceptable! I want to speak to the manager now." <<
		std::endl;
}

typedef void	(Harl::*function_ptr) ();

void	Harl::complain(std::string level)
{
	function_ptr	pointers[4];
	std::string		levels[4];
	int i;

	pointers[0] = &Harl::debug;
	pointers[1] =  &Harl::info;
	pointers[2] =  &Harl::warning;
	pointers[3] =  &Harl::error;
	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";
	i = 0;

	for (i = 0; i < 4; ++i)
		if (levels[i] == level)
			break;
	switch (i)
	{
		case 0:
			(this->*pointers[0]) ();
		case 1:
			(this->*pointers[1]) ();
		case 2:
			(this->*pointers[2]) ();
		case 3:
			(this->*pointers[3]) ();
			break;
		default:
			std::cout <<
			"[ Probably complaining about insignificant problems ]" <<
			std::endl;
			break;
	}
}

Harl::~Harl(void) {}