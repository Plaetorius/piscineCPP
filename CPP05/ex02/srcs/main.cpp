/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 18:07:32 by tgernez           #+#    #+#             */
/*   Updated: 2023/07/05 11:57:59 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include <iostream>
#include <string>

int main()
{
	std::cout << "======Default Constructor test=======" << std::endl;
	try
	{
		PresidentialPardonForm form_1;
		std::cout << form_1 << std::endl;
		RobotomyRequestForm	form_2;
		std::cout << form_2 << std::endl;
		ShrubberyCreationForm form_3;
		std::cout << form_3 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "======String / Copy Constructor test=======" << std::endl;
	try
	{
		PresidentialPardonForm form_1a("target_form1a");
		PresidentialPardonForm form_1b(form_1a);
		std::cout << form_1a << std::endl;
		std::cout << form_1b << std::endl;

		RobotomyRequestForm	form_2a("target_form2a");
		RobotomyRequestForm	form_2b(form_2a);
		std::cout << form_2a << std::endl;
		std::cout << form_2b << std::endl;
	
		ShrubberyCreationForm form_3a("target_form3a");
		ShrubberyCreationForm form_3b(form_3a);
		std::cout << form_3a << std::endl;
		std::cout << form_3b << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "======Assignation Operator test=======" << std::endl;
	try
	{
		PresidentialPardonForm form_1a("target_form1a");
		PresidentialPardonForm form_1b("target_form1b");
		std::cout << form_1a << std::endl;
		std::cout << form_1b << std::endl;
		form_1b = form_1a;
		std::cout << form_1a << std::endl;
		std::cout << form_1b << std::endl;

		RobotomyRequestForm	form_2a("target_form2a");
		RobotomyRequestForm	form_2b("target_form2b");
		std::cout << form_2a << std::endl;
		std::cout << form_2b << std::endl;
		form_2b = form_2a;
		std::cout << form_2a << std::endl;
		std::cout << form_2b << std::endl;
	
		ShrubberyCreationForm form_3a("target_form3a");
		ShrubberyCreationForm form_3b("target_form3b");
		std::cout << form_3a << std::endl;
		std::cout << form_3b << std::endl;
		form_3b = form_3a;
		std::cout << form_3a << std::endl;
		std::cout << form_3b << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	
}