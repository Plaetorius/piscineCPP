/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:14:50 by tgernez           #+#    #+#             */
/*   Updated: 2023/07/05 14:46:49 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <iostream>

Intern::Intern()
{
	if (TEST_MODE)
		std::cout << "Default Intern constructor called" << std::endl;
}

Intern::Intern(const Intern &obj)
{
	if (TEST_MODE)
		std::cout << "Copy Intern constructor called" << std::endl;
	(void)obj;
}

Intern& Intern::operator=(const Intern &rhs)
{
	if (TEST_MODE)
		std::cout << "Intern Assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	return (*this);
}

Intern::~Intern()
{
	if (TEST_MODE)
		std::cout << "Intern destructor called" << std::endl;
}

AForm	*Intern::getPresidentialPardonForm(const std::string &target)
{
	return (new PresidentialPardonForm(target));	
}

AForm	*Intern::getRobotomyRequestForm(const std::string &target)
{
	return (new RobotomyRequestForm(target));
}

AForm	*Intern::getShrubberyCreationForm(const std::string &target)
{
	return (new ShrubberyCreationForm(target));
}

typedef	AForm *(Intern::*function_ptr)(const std::string&);

AForm *Intern::makeForm(const std::string &form_name, const std::string &target)
{
	std::string		form_names[3];
	function_ptr	ptrs[3];
	int i = 0;

	form_names[0] = "presidential pardon";
	form_names[1] = "robotomy request";
	form_names[2] = "shrubbery creation";
	ptrs[0] = &Intern::getPresidentialPardonForm;
	ptrs[1] = &Intern::getRobotomyRequestForm;
	ptrs[2] = &Intern::getShrubberyCreationForm;
	for (i = 0; i < 3; i++)
		if (form_names[i] == form_name)
			break;
	if (i == 3)
		throw Intern::FormNotFound();
	return ((this->*ptrs[i])(target));
}
