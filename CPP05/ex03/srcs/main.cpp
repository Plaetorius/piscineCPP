/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 18:07:32 by tgernez           #+#    #+#             */
/*   Updated: 2023/07/05 14:52:04 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include <iostream>
#include <string>

int main()
{
	try
	{
		Bureaucrat boss("Boss", 1);
		Intern someRandomIntern;
		AForm*	ppf;
		AForm*	rrf;
		AForm*	scf;
		ppf = someRandomIntern.makeForm("presidential pardon", "Lucky Luke");
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		scf = someRandomIntern.makeForm("shrubbery creation", "Grandma");
		
		boss.signForm(*ppf);
		boss.executeForm(*ppf);
		boss.signForm(*rrf);
		boss.executeForm(*rrf);
		boss.signForm(*scf);
		boss.executeForm(*scf);
		delete ppf;
		delete rrf;
		delete scf;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Intern someRandomIntern;
		AForm *bad_form;

		bad_form = someRandomIntern.makeForm("what is that form??????", "huge target");
		delete bad_form;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}