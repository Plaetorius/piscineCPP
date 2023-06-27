/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 14:06:10 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/27 15:35:03 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource()
{
	std::cout << "Default MateriaSource constructor called" << std::endl;
	for (int i = 0; i < MATERIAS_SIZE; i++)
		this->_materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
	std::cout << "Copy MateriaSource constructor called" << std::endl;
	for (int i = 0; i < MATERIAS_SIZE; i++)
	{
		if (obj._materias[i])
			this->_materias[i] = obj._materias[i]->clone();
		else
			this->_materias[i] = NULL;
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource &rhs)
{
	std::cout << "MateriaSource Assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	for (int i = 0; i < MATERIAS_SIZE; i++)
	{
		if (rhs._materias[i])
			this->_materias[i] = rhs._materias[i]->clone();
		else
			this->_materias[i] = NULL;
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < MATERIAS_SIZE; i++)
	{
		if (this->_materias[i])
			delete this->_materias[i];
	}
}

/*
	"They are not necessarily unique." --> _materias can have 2 cures, 2 ices...
	but the Materias need to be distinct instances.
	Thus, _materias will never contains twice the same memory address (pointer
	to a given instance).
*/
void MateriaSource::learnMateria(AMateria* m)
{
	int items = 0;

	if (m == NULL)
	{
		std::cout << "Bad Materia!" << std::endl;
		return ;
	}
	
	while (this->_materias[items] == NULL && items < MATERIAS_SIZE)
	{
		if (this->_materias[items] == m)
		{
			std::cout << "Already have the EXACT same Materia in Materias!" << std::endl;
			return ;
		}
		items++;
	}	
	if (items == MATERIAS_SIZE)
	{
		std::cout << "Not enough space to store a new Materia!" << std::endl;
		return ;
	}
	this->_materias[items] = m->clone();
}

bool	MateriaSource::is_in_materias(const std::string &type)
{
	for (int i = 0; i < MATERIAS_SIZE; i++)
	{
		if (this->_materias[i]->getType() == type)
			return (true);
	}
	return (false);
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	int i;
	
	if (this->is_in_materias(type))
		return (NULL);
	for (i = 0; i < MATERIAS_SIZE; i++)
	{
		if (this->_materias[i]->getType() == type)
			break;
	}
	return (this->_materias[i]->clone());
}

void MateriaSource::display_materias()
{
	std::cout << "###############################################" << std::endl;
	std::cout << "Content of Materias:" << std::endl;
	for (int i = 0; i < MATERIAS_SIZE; i++)
	{
		std::cout << i << ". " << this->_materias[i] << std::endl;
	}
}