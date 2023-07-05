/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 18:07:32 by tgernez           #+#    #+#             */
/*   Updated: 2023/07/05 11:37:01 by tgernez          ###   ########.fr       */
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
	// std::cout << "*************************************" << std::endl;
	// std::cout << "*    PresidentialPardonForm test    *" << std::endl;
	// std::cout << "*************************************" << std::endl;
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
	
}