/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:24:22 by tgernez           #+#    #+#             */
/*   Updated: 2023/07/05 12:57:25 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>
#include "AForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("default")
{
	if (TEST_MODE)
		std::cout << "Default ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : AForm(obj), _target(obj._target)
{
	if (TEST_MODE)
		std::cout << "Copy ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	if (TEST_MODE)
		std::cout << "ShrubberyCreationForm Assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->AForm::operator=(rhs);
	this->_target = rhs._target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	if (TEST_MODE)
		std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	if (TEST_MODE)
		std::cout << "RobotomyRequestForm String Constructor called" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == false)
		throw AForm::FormNotSigned();
	if (executor.getGrade() > this->getExecGrade())
		throw AForm::GradeTooHighException();
	const std::string filename = this->_target + "_shrubbery";
	const std::string tree =
		"  ^   \n"
		" /^\\ \n"
		"/^^^\\\n"
		"  |   \n";
	std::ofstream out_file(filename.c_str());
	if (out_file.is_open())
	{
		out_file << tree;
		out_file.close();
	}
	else
		throw ShrubberyCreationForm::FileCreate();
}

std::string ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}

std::ostream&	operator<<(std::ostream& os, const ShrubberyCreationForm &obj)
{
	os << "Name: " << obj.getName() << std::endl
		<< "Signed: " << obj.getSigned() << std::endl
		<< "Sign Grade: " << obj.getSignGrade() << std::endl
		<< "Exec Grade: " << obj.getExecGrade() << std::endl
		<< "Target: " << obj.getTarget();
	return (os);
}