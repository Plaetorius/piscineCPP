/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 21:59:50 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/27 19:25:46 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <string>

Brain::Brain()
{
	std::cout << "Default Brain constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "";
}

Brain::Brain(const Brain &obj)
{
	std::cout << "Copy Brain constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = obj._ideas[i];
}

Brain& Brain::operator=(const Brain &rhs)
{
	std::cout << "Brain Assignment Operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = rhs._ideas[i];
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

void	Brain::change_idea(std::string idea, int i)
{
	if (i < 0 || i > 99)
	{
		std::cout << "Bad idea index" << std::endl;
		return ;
	}
	this->_ideas[i] = idea;
}

void	Brain::display_ideas()
{
	std::cout << "=========================IDEAS=========================" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		if (this->_ideas[i].empty())
			std::cout << i << ". Empty" << std::endl; 
		else
			std::cout << i << ". " << this->_ideas[i] << std::endl; 
	}
}
