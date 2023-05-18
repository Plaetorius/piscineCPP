/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:29:55 by tgernez           #+#    #+#             */
/*   Updated: 2023/05/18 11:22:49 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	create_contact(PhoneBook *phone_book)
{
	std::string	first_name = "";
	std::string	last_name = "";
	std::string	nickname = "";
	std::string	phone_number = "";
	std::string	darkest_secret = "";

	while (true)
	{
		std::cout << "Please enter a first name" << std::endl;
		std::getline(std::cin, first_name);
		std::cout << "Please enter a last name" << std::endl;
		std::getline(std::cin, last_name);
		std::cout << "Please enter a  nickname" << std::endl;
		std::getline(std::cin, nickname);
		std::cout << "Please enter a phone number" << std::endl;
		std::getline(std::cin, phone_number);
		std::cout << "Please enter a darkest secret" << std::endl;
		std::getline(std::cin, darkest_secret);
		if (first_name.empty() || last_name.empty() || nickname.empty() || phone_number.empty() || darkest_secret.empty())
			std::cout << "You can't have an empty field. Please try again" << std::endl ;
		else
			break ;
	}
	phone_book->add_contact(first_name, last_name, nickname, phone_number, darkest_secret);
	std::cout << "Contact added succesfully" << std::endl;
}	

int main()
{
	PhoneBook	phone_book;
	std::string	entry = "";

	std::cout << "Welcome to your PhoneBook!" << std::endl; 
	while (true)
	{
		std::cout << "Please enter one of the three commands: ADD, SEARCH, EXIT" << std::endl;
		std::getline(std::cin, entry);
		if (entry == "ADD")
		{
			create_contact(&phone_book);
		}
		else if (entry == "SEARCH")
		{
			phone_book.display_all_contacts();
			std::cout << "Please enter the index of the contact you want to see" << std::endl;
			std::getline(std::cin, entry);
			phone_book.display_single_contact(std::stoi(entry));
		}
		else if (entry == "EXIT")
			break ;
		else
			std::cout << "Please enter a valid command" << std::endl;
	}

	return (EXIT_SUCCESS);
}