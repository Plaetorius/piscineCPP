/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 00:21:42 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/20 18:39:24 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include <iostream>

IMateriaSource::MateriaSource()
{
	std::cout << "Default MateriaSource constructor called" << std::endl;
}

IMateriaSource::MateriaSource(const MateriaSource &obj)
{
	std::cout << "Copy MateriaSource constructor called" << std::endl;
}

IMateriaSource& IMateriaSource::operator=(const IMateriaSource &rhs)
{
	std::cout << "MateriaSource Assignment Operator called" << std::endl;
	if (this == &rhs)
		return (*this);
}

IMateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called" << std::endl;
}