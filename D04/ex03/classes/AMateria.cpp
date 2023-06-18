/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 00:21:33 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/19 00:21:34 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria()
{
	std::cout << "Default AMateria constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &obj)
{
	std::cout << "Copy AMateria constructor called" << std::endl;
}

AMateria& AMateria::operator=(const AMateria &rhs)
{
	std::cout << "AMateria Assignment operator called" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}