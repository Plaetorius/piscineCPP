/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:33:18 by tgernez           #+#    #+#             */
/*   Updated: 2023/05/17 18:56:58 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
	: contacts{}, nb_contacts(0), oldest(0)
{
	std::cout << "Constructed a phonebook" << std::endl;
	return ;
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

void	PhoneBook::display_all_contacts(void)
{
	std::cout << "ouais" <<std::endl;
	return ;
}

void	PhoneBook::display_single_contact(int index)
{
	if (index < 1 || index > PhoneBook::nb_contacts)
	{
		std::cout << "Wrong contact index" << std::endl;
		return ;
	}
	std::cout << PhoneBook::contacts[index].get_first_name() << std::endl;
	std::cout << PhoneBook::contacts[index].get_last_name() << std::endl;
	std::cout << PhoneBook::contacts[index].get_nickname() << std::endl;
	std::cout << PhoneBook::contacts[index].get_phone_number() << std::endl;
	std::cout << PhoneBook::contacts[index].get_darkest_secret() << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Destructed a phonebook" << std::endl;
	return ;
}
