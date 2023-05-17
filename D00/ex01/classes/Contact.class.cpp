/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:18:34 by tgernez           #+#    #+#             */
/*   Updated: 2023/05/17 14:05:10 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact(std::string first_name,
				std::string last_name,
				std::string	nickname,
				std::string phone_number,
				std::string darkest_secret)
				:
				first_name(std::move(first_name)),
				last_name(std::move(last_name)),
				nickname(std::move(nickname)),
				phone_number(std::move(phone_number)),
				darkest_secret(std::move(darkest_secret))
{
	return ;
}

std::string Contact::get_first_name(void)
{
	return (first_name);
}

std::string Contact::get_last_name(void)
{
	return (last_name);
	
}

std::string Contact::get_nickname(void)
{
	return (nickname);
	
}

std::string Contact::get_phone_number(void)
{
	return (phone_number);
	
}

std::string Contact::get_darkest_secret(void)
{
	return (darkest_secret);
	
}


Contact::~Contact(void)
{
	std::cout << "Destructed a contact" << std::endl;
	return ;
}
