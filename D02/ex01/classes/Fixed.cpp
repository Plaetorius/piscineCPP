/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 17:47:24 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/25 16:06:37 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : _fixed_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	_fixed_value = obj.getRawBits();
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	_fixed_value = value << _fixed_length;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	_fixed_value = roundf(value * (1 <<  _fixed_length));
}

float Fixed::toFloat(void) const
{
    return static_cast<float>(_fixed_value) / (1 << _fixed_length);
}

int		Fixed::toInt(void) const
{
	return (_fixed_value >> _fixed_length);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixed_value;
}

std::ostream&	operator<<(std::ostream &os, const Fixed &obj)
{
	os << obj.toFloat();
	return os;			
}

Fixed& Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Copy assignment Operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_fixed_value = rhs.getRawBits();
	return *this;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixed_value = raw;
}


Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

