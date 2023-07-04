/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 18:07:32 by tgernez           #+#    #+#             */
/*   Updated: 2023/07/04 12:17:31 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

/*
	Something to understand before reading this code:
	Each try-and-catch block variables do NOT interfere.
	i could have 10000 variables "a" in my code, if they are separated in
	10000 different try-and-catch blocks, that won't create any problem
*/
int main()
{
	std::cout << "======================Default Constructor test=======================" << std::endl;
	try
	{
		Bureaucrat bureaucrat_1;
		std::cout << "Bureaucrat_1:" << std::endl;
		std::cout << bureaucrat_1 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "======================Copy constructor test=======================" << std::endl;
	try
	{
		Bureaucrat bureaucrat_1;
		Bureaucrat bureaucrat_2(bureaucrat_1);
		std::cout << "Bureaucrat_1:" << std::endl;
		std::cout << bureaucrat_1 << std::endl;
		std::cout << "Bureaucrat_2:" << std::endl;
		std::cout << bureaucrat_2 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "======================String Constructor test=======================" << std::endl;
	try
	{
		Bureaucrat bureaucrat_1("Johnny", 42);
		std::cout << "Bureaucrat_1:" << std::endl;
		std::cout << bureaucrat_1 << std::endl;	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "======================Assignation Operator test=======================" << std::endl;
	try
	{
		Bureaucrat bureaucrat_1("Johnny", 42);
		Bureaucrat bureaucrat_2;
		bureaucrat_2 = bureaucrat_1;
		std::cout << "Bureaucrat_1:" << std::endl;
		std::cout << bureaucrat_1 << std::endl;
		std::cout << "Bureaucrat_2:" << std::endl;
		std::cout << bureaucrat_2 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "======================Constructor Grade Too High test=======================" << std::endl;
	try
	{
		Bureaucrat bureaucrat_1("Johnny", 0);
		std::cout << "Bureaucrat_1:" << std::endl;
		std::cout << bureaucrat_1 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "======================Constructor Grade Too High test=======================" << std::endl;
	try
	{
		Bureaucrat bureaucrat_1("Johnny", -1111110);
		std::cout << "Bureaucrat_1:" << std::endl;
		std::cout << bureaucrat_1 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "======================Constructor Grade Too Low test=======================" << std::endl;
	try
	{
		Bureaucrat bureaucrat_1("Johnny", 151);
		std::cout << "Bureaucrat_1:" << std::endl;
		std::cout << bureaucrat_1 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "======================Constructor Grade Too Low test=======================" << std::endl;
	try
	{
		Bureaucrat bureaucrat_1("Johnny", 1111110);
		std::cout << "Bureaucrat_1:" << std::endl;
		std::cout << bureaucrat_1 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "======================Constructor Grade Too High test=======================" << std::endl;
	try
	{
		Bureaucrat bureaucrat_1("Johnny", 0);
		std::cout << "Bureaucrat_1:" << std::endl;
		std::cout << bureaucrat_1 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "======================Constructor Grade Too High test=======================" << std::endl;
	try
	{
		Bureaucrat bureaucrat_1("Johnny", -1111110);
		std::cout << "Bureaucrat_1:" << std::endl;
		std::cout << bureaucrat_1 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "======================Promoting Too Much test=======================" << std::endl;
	try
	{
		Bureaucrat bureaucrat_1("Johnny", 10);
		std::cout << "Bureaucrat_1:" << std::endl;
		std::cout << bureaucrat_1 << std::endl;
		for (int i = 0; i < 40; i++)
			bureaucrat_1.promote();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "======================Demoting Too Much test=======================" << std::endl;
	try
	{
		Bureaucrat bureaucrat_1("Johnny", 140);
		std::cout << "Bureaucrat_1:" << std::endl;
		std::cout << bureaucrat_1 << std::endl;
		for (int i = 0; i < 40; i++)
			bureaucrat_1.demote();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}