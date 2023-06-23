/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:29:55 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/23 15:30:21 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

bool	safe_getline(std::string *str)
{
	if (!std::getline(std::cin, *str))
	{
		if (std::cin.eof())
		{
			std::cout << "EOF. End of program." << std::endl;
			return (false);
		}
		else
		{
			std::cout << "Input error occurred. End of program" << std::endl;
			return (false);
		}
	}
	return (true);
}

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
		if (!safe_getline(&first_name))
		{
			std::exit(EXIT_FAILURE);
			return ;
		}
		std::cout << "Please enter a last name" << std::endl;
		if (!safe_getline(&last_name))
		{
			std::exit(EXIT_FAILURE);
			return ;
		}
		std::cout << "Please enter a  nickname" << std::endl;
		if (!safe_getline(&nickname))
		{
			std::exit(EXIT_FAILURE);
			return ;
		}
		std::cout << "Please enter a phone number" << std::endl;
		if (!safe_getline(&phone_number))
		{
			std::exit(EXIT_FAILURE);
			return ;
		}
		std::cout << "Please enter a darkest secret" << std::endl;
		if (!safe_getline(&darkest_secret))
		{
			std::exit(EXIT_FAILURE);
			return ;
		}
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
	long		contact_number = 0;

	std::cout << "Welcome to your PhoneBook!" << std::endl;
	while (true)
	{
		std::cout << "Please enter one of the three commands: ADD, SEARCH, EXIT" << std::endl;
		if (!safe_getline(&entry))
			break ;
		if (entry == "ADD")
		{
			create_contact(&phone_book);
		}
		else if (entry == "SEARCH")
		{
			phone_book.display_all_contacts();
			std::cout << "Please enter the index of the contact you want to see" << std::endl;
			if (!safe_getline(&entry))
				break ;
			contact_number = std::atol(entry);
			if (contact_number)
				
            phone_book.display_single_contact(std::atol(entry));
        }
        else if (entry == "EXIT")
        {
            break;
        }
        else
        {
            std::cout << "Please enter a valid command" << std::endl;
        }
    }
    return (EXIT_SUCCESS);
}