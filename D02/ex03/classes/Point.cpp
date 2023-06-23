/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 11:31:15 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/23 11:31:54 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>
#include <cmath>

Point::Point()
{
	std::cout << "Default Point constructor called" << std::endl;
}

Point::Point(const Point &obj)
{
	std::cout << "Copy Point constructor called" << std::endl;
}

Point& Point::operator=(const Point &rhs)
{
	std::cout << "Point Assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
}

Point::~Point()
{
	std::cout << "Point destructor called" << std::endl;
}