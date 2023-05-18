/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:29:46 by tgernez           #+#    #+#             */
/*   Updated: 2023/05/18 11:22:27 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
# include "Contact.class.hpp"
# include <string>

class PhoneBook
{
	private:
		Contact	contacts[8];
		int	nb_contacts;
		int oldest;

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