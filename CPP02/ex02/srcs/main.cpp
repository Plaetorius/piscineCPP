/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 17:47:41 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/23 11:56:11 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <string>

int main( void )
{
	Fixed 		a;
	Fixed 		c (127);
	Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << "Raw Bits a: " << a.getRawBits() << a << std::endl;
	std::cout << "--a    " << (--a) << a.getRawBits() << std::endl;
	std::cout << "a--    " << (a--) << a.getRawBits() << std::endl;
	std::cout << "++a    " << (++a) << a.getRawBits() << std::endl;
	std::cout << "a++    " << (a++) << a.getRawBits()  << std::endl;
	std::cout << "a + c  " << (a + c).getRawBits() << std::endl;
	std::cout << "c - a  " << (c - a).getRawBits() << std::endl;
	std::cout << "a * c  " << (a * c).getRawBits() << std::endl;
	std::cout << "c / a  " << (c / a).getRawBits() << std::endl;
	std::cout << "a: " << a << " c: " << c << std::endl;
	std::cout << "a < c  " << (a < c) << std::endl;
	std::cout << "a > c  " << (a > c)  << std::endl;
	std::cout << "a >= c " << (a >= c) << std::endl;
	std::cout << "a <= c " << (a <= c) << std::endl;
	std::cout << "a == c " << (a == c) << std::endl;
	std::cout << "a != c " << (a != c) << std::endl;
	a = c;
	std::cout << "a = c  " << "a: " << a.getRawBits() << "/c: " << c.getRawBits() << std::endl;

	std::cout << "b: " << b << std::endl;

	std::cout << "Max " << a << " & " << b << ": " << Fixed::max( a, b ) << std::endl;
	std::cout << "Min " << a << " & " << b << ": " << Fixed::min( a, b ) << std::endl;


	return 0;
}