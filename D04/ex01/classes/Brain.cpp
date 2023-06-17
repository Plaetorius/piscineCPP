/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 21:59:50 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/17 22:16:00 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <string>

Brain::Brain()
{
	std::cout << "Default Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &obj)
{
	std::cout << "Copy Brain constructor called" << std::endl;
	for (int i = 0; i < 100; ++i)
		this->_ideas[i] = obj._ideas[i];
}

Brain& Brain::operator=(const Brain &rhs)
{
	std::cout << "Brain Assignment operator called" << std::endl;
	for (int i = 0; i < 100; ++i)
		this->_ideas[i] = rhs._ideas[i];
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}
