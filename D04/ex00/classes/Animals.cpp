/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animals.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 17:08:25 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/17 17:11:35 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animals.hpp"

Animals::Animals() : _type("");
{
	std::cout << "Default Animals constructor called" << std::endl;
}

Animals::Animals(const Animals &obj)
{
	std::cout << "Copy Animals constructor called" << std::endl;
}

Animals& Animals::operator=(const Animals &rhs)
{
	std::cout << "Assignation Animals Operator called" << std::endl;
}

Animals::~Animals()
{
	std::cout << " Animals destructor called" << std::endl;
}