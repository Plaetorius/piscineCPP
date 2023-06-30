/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookClass.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:29:46 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/16 20:04:09 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOKCLASS_HPP
# define PHONEBOOKCLASS_HPP
# include "Contact.hpp"
# include <string>

class PhoneBook
{
	private:
		Contact	_contacts[8];
		int	_nb_contacts;
		int _oldest;

	public:
		PhoneBook(void);
		void add_contact(std::string first_name,
					std::string	last_name,
					std::string	nickname,
					std::string	phone_number,
					std::string	darkest_secret);
		void display_all_contacts(void);
		void display_single_contact(int index);
		~PhoneBook(void);

	private:
		std::string	truncate_string(const std::string& str, size_t width);
};

#endif