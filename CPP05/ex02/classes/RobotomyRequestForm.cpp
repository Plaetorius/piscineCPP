/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:24:20 by tgernez           #+#    #+#             */
/*   Updated: 2023/07/05 11:41:12 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>
#include "AForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45), _target("default")
{
	if (TEST_MODE)
		std::cout << "Default RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : Form(obj), _target(obj._target)
{
	if (TEST_MODE)
		std::cout << "Copy RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	if (TEST_MODE)
		std::cout << "RobotomyRequestForm Assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->operator=(rhs);
	this->_target = rhs._target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	if (TEST_MODE)
		std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
	if (TEST_MODE)
		std::cout << "RobotomyRequestForm String Constructor called" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	/*
		Note that, to play some real drilling noises, we could use the
		SFML/Audio library, but that would be quite incovenient to the 
		nearby students during the correction.
	*/
	if (this->getSigned() == false)
		throw Form::FormNotSigned();
	if (executor.getGrade() > this->getExecGrade())
		throw Form::GradeTooHighException();
	std::cout << "*weird drilling noises echoing against the walls*" << std::endl;
	static int random;
	
	if (random % 2)
		std::cout << this->_target << " has been successfully robotomized!" << std::endl;
	else
		std::cout << this->_target << " may have to cope with some headaches, his robotomization failed!" << std::endl;
	++random;
}