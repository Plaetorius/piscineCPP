/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:24:18 by tgernez           #+#    #+#             */
/*   Updated: 2023/07/05 12:56:27 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("default")
{
	std::cout << "Default PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) : AForm(obj), _target(obj._target)
{
	std::cout << "Copy PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	std::cout << "PresidentialPardonForm Assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->AForm::operator=(rhs);
	this->_target = rhs._target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << "PresidentialPardonForm String Constructor called" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == false)
		throw AForm::FormNotSigned();
	if (executor.getGrade() > this->getExecGrade())
		throw AForm::GradeTooHighException();
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox. Enjoy!" << std::endl;
}

std::string PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}

/*
	We create a new overload to ease the comparaisons
*/
std::ostream&	operator<<(std::ostream& os, const PresidentialPardonForm &obj)
{
	os << "Name: " << obj.getName() << std::endl
		<< "Signed: " << obj.getSigned() << std::endl
		<< "Sign Grade: " << obj.getSignGrade() << std::endl
		<< "Exec Grade: " << obj.getExecGrade() << std::endl
		<< "Target: " << obj.getTarget();
	return (os);
}