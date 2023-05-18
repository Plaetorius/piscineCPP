/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:33:18 by tgernez           #+#    #+#             */
/*   Updated: 2023/05/18 11:21:59 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


PhoneBook::PhoneBook(void)
{
    nb_contacts = 0;
    oldest = 0;
}

void	PhoneBook::add_contact(std::string first_name, std::string last_name,
		std::string nickname, std::string phone_number,
		std::string darkest_secret) 
{
	if (PhoneBook::nb_contacts < 8)
	{
		PhoneBook::contacts[PhoneBook::nb_contacts] =
			Contact(std::move(first_name),
					std::move(last_name),
					std::move(nickname),
					std::move(phone_number),
					std::move(darkest_secret));
		PhoneBook::nb_contacts++;
	}
	else
	{
		PhoneBook::contacts[PhoneBook::oldest] =
			Contact(std::move(first_name),
					std::move(last_name),
					std::move(nickname),
					std::move(phone_number),
					std::move(darkest_secret));
		if (PhoneBook::oldest == 7)
			PhoneBook::oldest = 0;
		else
			PhoneBook::oldest++;
	}		
}

std::string	PhoneBook::truncate_string(const std::string& str, size_t width)
{
	std::string truncated_str = str;

	if (truncated_str.length() > width)
	{
		truncated_str = truncated_str.substr(0, width - 1) + '.';
	}
    return (truncated_str);
}

void	PhoneBook::display_all_contacts(void)
{
	std::cout << "     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "----------+----------+----------+----------" << std::endl;

	for (int i = 0; i < nb_contacts; ++i)
	{	
		std::cout.width(10);
		std::cout << std::right << i + 1 << '|';
		std::cout.width(10);
		std::cout << std::right << truncate_string(contacts[i].get_first_name(), 10) << '|';
		std::cout.width(10);
		std::cout << std::right << truncate_string(contacts[i].get_last_name(), 10) << '|';
		std::cout.width(10);
		std::cout << std::right << truncate_string(contacts[i].get_nickname(), 10) << '|' << std::endl;
	}
	return ;
}

void	PhoneBook::display_single_contact(int index)
{
	if (index < 1 || index > PhoneBook::nb_contacts)
	{
		std::cout << "Wrong contact index" << std::endl;
		return ;
	}
	std::cout << "This is contact " << index << std::endl;
	std::cout << "First Name: " << PhoneBook::contacts[index - 1].get_first_name() << std::endl;
	std::cout << "Last Name: " << PhoneBook::contacts[index - 1].get_last_name() << std::endl;
	std::cout << "Nickname: " << PhoneBook::contacts[index - 1].get_nickname() << std::endl;
	std::cout << "Phone Number: " << PhoneBook::contacts[index - 1].get_phone_number() << std::endl;
	std::cout << "Darkest Secret: " << PhoneBook::contacts[index - 1].get_darkest_secret() << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}
