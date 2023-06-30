/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 18:07:36 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/30 14:08:14 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat() : _name("unknown"), _grade(150)
{
	std::cout << "Default Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : _name(obj._name)
{
	std::cout << "Copy Bureaucrat constructor called" << std::endl;
	this->_grade = obj._grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &rhs)
{
	std::cout << "Bureaucrat Assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	// this->_name = rhs._name; Impossible because _name is const, only the grades are copied
	this->_grade = rhs._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}


void	Bureaucrat::tryCatchGrade(int grade)
{
	try 
	{
		if (grade < 1) 			throw ("Bureaucrat::GradeTooLowException");
		else if (grade > 150)	throw ("Bureaucrat::GradeTooHighException");
	}	
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name)
{
	std::cout << "Bureaucrat constructor called for " << name
				<< " with grade " << grade << std::endl; 
	tryCatchGrade(grade);
	this->_grade = grade;
}

int	Bureaucrat::getGrade()
{
	return (this->_grade);
}

const std::string Bureaucrat::getName()
{
	return (this->_name);
}

void	Bureaucrat::promote(int grade)
{
	tryCatchGrade(grade - 1);
	this->_grade = grade - 1;
	std::cout << this->_name << " has been promoted to grade " << grade << "! Congrats!" << std::endl;
}

void	Bureaucrat::demote(int grade)
{
	tryCatchGrade(grade + 1);
	this->_grade = grade + 1;
	std::cout << this->_name << " has been demoted to grade " << grade << "! Looser!" << std::endl;
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat &obj)
{
	os << obj.getName() << ", has grade " << obj.getGrade();
	return (os);
}