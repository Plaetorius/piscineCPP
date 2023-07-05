/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:14:47 by tgernez           #+#    #+#             */
/*   Updated: 2023/07/05 14:42:48 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

# include <string>
# include "AForm.hpp" 
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
	private:
		AForm			*getPresidentialPardonForm(const std::string &target);
		AForm			*getRobotomyRequestForm(const std::string &target);
		AForm			*getShrubberyCreationForm(const std::string &target);
	public:
		Intern();
		Intern(const  Intern &obj);
		Intern& operator=(const Intern &rhs);
		~Intern();

		AForm *makeForm(const std::string &form_name, const std::string &target);

	class FormNotFound: public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("[INTERN] Form not found!");
			}
	};
};

#endif