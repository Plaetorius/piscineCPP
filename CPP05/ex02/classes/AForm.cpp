/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 15:55:42 by tgernez           #+#    #+#             */
/*   Updated: 2023/07/05 11:36:22 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

Form::Form() : _name("Unknow Form"), _signed(false), _sign_grade(150), _exec_grade(150)
{
	if (TEST_MODE)
		std::cout << "Default Form constructor called" << std::endl;
}

Form::Form(const Form &obj) :  _name(obj._name), _signed(obj._signed), _sign_grade(obj._sign_grade), _exec_grade(obj._exec_grade)
{
	if (TEST_MODE)
		std::cout << "Copy Form constructor called" << std::endl;
}

Form& Form::operator=(const Form &rhs)
{
	if (TEST_MODE)
		std::cout << "Form Assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	//All the other variables are consts
	this->_signed = rhs._signed;
	return (*this);
}

Form::~Form()
{
	if (TEST_MODE)
		std::cout << "Form destructor called" << std::endl;
}

Form::Form(const std::string& name, int sign_grade, int exec_grade) : _name(name), _signed(false), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	if (TEST_MODE)
		std::cout << "Form String Constructor called" << std::endl;
	if (sign_grade > 150 || exec_grade > 150)
		throw (Form::GradeTooLowException());
	if (sign_grade < 1 || exec_grade < 1)
		throw (Form::GradeTooHighException());
}

const std::string	Form::getName() const
{
	return (this->_name);
}

bool			Form::getSigned() const
{
	return (this->_signed);
}
int			Form::getSignGrade() const
{
	return (this->_sign_grade);
}

int			Form::getExecGrade() const
{
	return (this->_exec_grade);
}

void				Form::beSigned(const Bureaucrat& bureaucrat)
{
	const	int bureaucrat_grade = bureaucrat.getGrade();

	std::cout << "beSigned called on form " << this->_name << std::endl;
	if (this->_sign_grade < bureaucrat_grade)
		throw Form::GradeTooLowException();
	this->_signed = true;
}

std::ostream&	operator<<(std::ostream& os, const Form &obj)
{
	os << "Name: " << obj.getName() << std::endl
		<< "Signed: " << obj.getSigned() << std::endl
		<< "Sign Grade: " << obj.getSignGrade() << std::endl
		<< "Exec Grade: " << obj.getExecGrade();
	return (os);
}