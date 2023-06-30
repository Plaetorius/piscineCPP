/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 00:21:42 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/25 19:38:48 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include <iostream>

IMateriaSource::IMateriaSource()
{
	std::cout << "Default MateriaSource constructor called" << std::endl;
}

IMateriaSource::IMateriaSource(const IMateriaSource &obj)
{
	std::cout << "Copy MateriaSource constructor called" << std::endl;
	(void)obj;
}

IMateriaSource& IMateriaSource::operator=(const IMateriaSource &rhs)
{
	std::cout << "MateriaSource Assignment Operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	return (*this);
}

IMateriaSource::~IMateriaSource()
{
	std::cout << "MateriaSource destructor called" << std::endl;
}