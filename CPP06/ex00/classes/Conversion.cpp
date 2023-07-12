/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 17:09:49 by tgernez           #+#    #+#             */
/*   Updated: 2023/07/12 18:10:43 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"
#include <iostream>
#include <string>

Conversion::Conversion()
{
	std::cout << "Default Conversion constructor called" << std::endl;
}

Conversion::Conversion(const Conversion &obj)
{
	std::cout << "Copy Conversion constructor called" << std::endl;
	(void)obj;
}

Conversion& Conversion::operator=(const Conversion &rhs)
{
	std::cout << "Conversion Assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	return (*this);
}

Conversion::~Conversion()
{
	std::cout << "Conversion destructor called" << std::endl;
}


/*
	0 to 31 and 127 are undisplayble chars
		0 - 31 being special characters (i.e. carraige returns, indentation...)
		127 being delete
*/
void Conversion::convert(const std::string &str)
{
	const std::string 	allowed_chars = "0123456789inaf.+-";
	std::locale			loc;

	if (str.empty())
	{
		std::cerr << "Empty argument" << std::endl;
		return ;
	}
	if (!isalpha(str[i], loc) && str[i] != '+' && str[i] != '-')
		printFromChar(str[i]);
	for (std::size_t i = 0; i < str.length(); i++)
	{
		if (allowed_chars.find(str[i]) == std::string::npos)
		{
			std::cerr << "Invalid character" << std::endl;
			return ;
		}

	}	
}
