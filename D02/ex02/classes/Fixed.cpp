/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 17:47:24 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/17 00:06:37 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

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
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixed_value = rhs.getRawBits();
	return *this;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixed_value = raw;
}

bool	Fixed::operator>(const Fixed &rhs) const
{
	return this->_fixed_value > rhs._fixed_value;
}

bool	Fixed::operator<(const Fixed &rhs) const
{
	return this->_fixed_value < rhs._fixed_value;
}

bool	Fixed::operator>=(const Fixed &rhs) const
{
	return this->_fixed_value >= rhs._fixed_value;
}

bool	Fixed::operator<=(const Fixed &rhs) const
{
	return this->_fixed_value <= rhs._fixed_value;
}

bool	Fixed::operator==(const Fixed &rhs) const
{
	return this->_fixed_value == rhs._fixed_value;
}

bool	Fixed::operator!=(const Fixed &rhs) const
{
	return this->_fixed_value != rhs._fixed_value;
}

Fixed	Fixed::operator+(const Fixed &rhs) const
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &rhs) const
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &rhs) const
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &rhs) const
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed&	Fixed::operator++() //Postfix
{
	++_fixed_value;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
	
	operator++();
	return tmp;	
}

Fixed&	Fixed::operator--()
{
	--_fixed_value;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);
	
	operator--();
	return tmp;	
}

Fixed& Fixed::min(Fixed &lhs, Fixed &rhs)
{
	if (lhs < rhs)
		return lhs;
	return rhs;
}

const Fixed& Fixed::min(const Fixed &lhs, const Fixed &rhs)
{
	if (lhs < rhs)
		return lhs;
	return rhs;
}

Fixed& Fixed::max(Fixed &lhs, Fixed &rhs)
{
	if (lhs > rhs)
		return lhs;
	return rhs;
}

const Fixed& Fixed::max(const Fixed &lhs, const Fixed &rhs)
{
	if (lhs > rhs)
		return lhs;
	return rhs;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

