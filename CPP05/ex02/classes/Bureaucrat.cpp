/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 18:07:36 by tgernez           #+#    #+#             */
/*   Updated: 2023/07/05 11:44:06 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>

Bureaucrat::Bureaucrat() : _name("Unknown"), _grade(150)
{
	std::cout << "Default Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj): _name(obj._name), _grade(obj._grade)
{
	std::cout << "Copy Bureaucrat constructor called" << std::endl;
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
	if (grade < 1) 			throw (Bureaucrat::GradeTooHighException());
	else if (grade > 150)	throw (Bureaucrat::GradeTooLowException());
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name)
{
	std::cout << "Bureaucrat constructor called for " << name
				<< " with grade " << grade << std::endl;
	tryCatchGrade(grade);
	this->_grade = grade;
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

const std::string Bureaucrat::getName() const
{
	return (this->_name);
}

void	Bureaucrat::promote()
{
	tryCatchGrade(this->_grade - 1);
	this->_grade -= 1;
	std::cout << this->_name << " has been promoted to grade " << this->_grade << "! Congrats!" << std::endl;
}

void	Bureaucrat::demote()
{
	tryCatchGrade(this->_grade + 1);
	this->_grade += 1;
	std::cout << this->_name << " has been demoted to grade " << this->_grade << "! Looser!" << std::endl;
}

void	Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->_name << " took his favorite pen and signed the form " << form.getName() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << this->_name << " couldn't sign the form " << form.getName() << " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->_name << " executed form " << form.getName() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << this->_name << " couldn't execute the form because " << e.what() << std::endl; 
	}
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat &obj)
{
	os << obj.getName() << ", has grade " << obj.getGrade();
	return (os);
}