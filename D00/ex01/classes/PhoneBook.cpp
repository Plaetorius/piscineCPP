/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:33:18 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/16 20:08:42 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


PhoneBook::PhoneBook(void)
{
    _nb_contacts = 0;
    _oldest = 0;
}

void	PhoneBook::add_contact(std::string first_name, std::string last_name,
		std::string nickname, std::string phone_number,
		std::string darkest_secret) 
{
	if (_nb_contacts < 8)
	{
		_contacts[_nb_contacts] =
			Contact(std::move(first_name),
					std::move(last_name),
					std::move(nickname),
					std::move(phone_number),
					std::move(darkest_secret));
		_nb_contacts++;
	}
	else
	{
		_contacts[_oldest] =
			Contact(std::move(first_name),
					std::move(last_name),
					std::move(nickname),
					std::move(phone_number),
					std::move(darkest_secret));
		if (_oldest == 7)
			_oldest = 0;
		else
			_oldest++;
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

	for (int i = 0; i < _nb_contacts; ++i)
	{	
		std::cout.width(10);
		std::cout << std::right << i + 1 << '|';
		std::cout.width(10);
		std::cout << std::right << truncate_string(_contacts[i].get_first_name(), 10) << '|';
		std::cout.width(10);
		std::cout << std::right << truncate_string(_contacts[i].get_last_name(), 10) << '|';
		std::cout.width(10);
		std::cout << std::right << truncate_string(_contacts[i].get_nickname(), 10) << '|' << std::endl;
	}
	return ;
}

void	PhoneBook::display_single_contact(int index)
{
	if (index < 1 || index > PhoneBook::_nb_contacts)
	{
		std::cout << "Wrong contact index" << std::endl;
		return ;
	}
	std::cout << "This is contact " << index << std::endl;
	std::cout << "First Name: " << _contacts[index - 1].get_first_name() << std::endl;
	std::cout << "Last Name: " << _contacts[index - 1].get_last_name() << std::endl;
	std::cout << "Nickname: " << _contacts[index - 1].get_nickname() << std::endl;
	std::cout << "Phone Number: " << _contacts[index - 1].get_phone_number() << std::endl;
	std::cout << "Darkest Secret: " << _contacts[index - 1].get_darkest_secret() << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void) {}
