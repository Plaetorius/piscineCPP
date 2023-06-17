/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 17:47:41 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/17 10:01:54 by tgernez          ###   ########.fr       */
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

	std::cout << a.decimals() << a << std::endl << std::endl;
	std::cout << --a << a.decimals() << std::endl << std::endl;
	std::cout << --a << a.decimals() << std::endl << std::endl;
	std::cout << --a << a.decimals() << std::endl << std::endl;
	std::cout << --a << a.decimals() << std::endl << std::endl;
	std::cout << --a << a.decimals() << std::endl << std::endl;
	std::cout << --a << a.decimals() << std::endl << std::endl;
	std::cout << --a << a.decimals() << std::endl << std::endl;
	std::cout << --a << a.decimals() << std::endl << std::endl;
	std::cout << --a << a.decimals() << std::endl << std::endl;
	std::cout << ++a << a.decimals() << std::endl << std::endl;
	std::cout << ++a << a.decimals() << std::endl << std::endl;
	std::cout << ++a << a.decimals() << std::endl << std::endl;
	std::cout << ++a << a.decimals() << std::endl << std::endl;
	std::cout << ++a << a.decimals() << std::endl << std::endl;
	std::cout << ++a << a.decimals() << std::endl << std::endl;
	std::cout << ++a << a.decimals() << std::endl << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	return 0;
}