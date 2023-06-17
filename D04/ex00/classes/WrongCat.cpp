/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 17:53:13 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/17 20:00:37 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Animal.hpp"
#include <iostream>

WrongCat::WrongCat()
{
	std::cout << "Default WrongCat constructor called" << std::endl;
	_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &obj)
{
	std::cout << "Copy WrongCat constructor called" << std::endl;
	this->_type = obj._type;
}

void WrongCat::makeSound(void) const
{
	std::cout << "*wrong meow meow*" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &rhs)
{
	std::cout << "WrongCat Assignment operator called" << std::endl;
	WrongAnimal::operator=(rhs);
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}