/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 00:21:40 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/19 00:21:41 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

Ice::Ice()
{
	std::cout << "Default Ice constructor called" << std::endl;
}

Ice::Ice(const Ice &obj)
{
	std::cout << "Copy Ice constructor called" << std::endl;
}

Ice& Ice::operator=(const Ice &rhs)
{
	std::cout << "Ice Assignment operator called" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
}