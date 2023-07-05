/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 15:55:42 by tgernez           #+#    #+#             */
/*   Updated: 2023/07/05 12:55:27 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

AForm::AForm() : _name("Unknow AForm"), _signed(false), _sign_grade(150), _exec_grade(150)
{
	if (TEST_MODE)
		std::cout << "Default AForm constructor called" << std::endl;
}

AForm::AForm(const AForm &obj) :  _name(obj._name), _signed(obj._signed), _sign_grade(obj._sign_grade), _exec_grade(obj._exec_grade)
{
	if (TEST_MODE)
		std::cout << "Copy AForm constructor called" << std::endl;
}

AForm& AForm::operator=(const AForm &rhs)
{
	if (TEST_MODE)
		std::cout << "AForm Assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	//All the other variables are consts
	this->_signed = rhs._signed;
	return (*this);
}

AForm::~AForm()
{
	if (TEST_MODE)
		std::cout << "AForm destructor called" << std::endl;
}

AForm::AForm(const std::string& name, int sign_grade, int exec_grade) : _name(name), _signed(false), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	if (TEST_MODE)
		std::cout << "AForm String Constructor called" << std::endl;
	if (sign_grade > 150 || exec_grade > 150)
		throw (AForm::GradeTooLowException());
	if (sign_grade < 1 || exec_grade < 1)
		throw (AForm::GradeTooHighException());
}

const std::string	AForm::getName() const
{
	return (this->_name);
}

bool			AForm::getSigned() const
{
	return (this->_signed);
}
int			AForm::getSignGrade() const
{
	return (this->_sign_grade);
}

int			AForm::getExecGrade() const
{
	return (this->_exec_grade);
}

void				AForm::beSigned(const Bureaucrat& bureaucrat)
{
	const	int bureaucrat_grade = bureaucrat.getGrade();

	std::cout << "beSigned called on form " << this->_name << std::endl;
	if (this->_sign_grade < bureaucrat_grade)
		throw AForm::GradeTooLowException();
	this->_signed = true;
}

std::ostream&	operator<<(std::ostream& os, const AForm &obj)
{
	os << "Name: " << obj.getName() << std::endl
		<< "Signed: " << obj.getSigned() << std::endl
		<< "Sign Grade: " << obj.getSignGrade() << std::endl
		<< "Exec Grade: " << obj.getExecGrade();
	return (os);
}