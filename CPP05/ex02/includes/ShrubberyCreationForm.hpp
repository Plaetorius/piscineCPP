/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:24:16 by tgernez           #+#    #+#             */
/*   Updated: 2023/07/05 11:22:27 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H
# include "AForm.hpp"
# include "Bureaucrat.hpp"
# include <string>

class ShrubberyCreationForm : public Form
{
	private:
		std::string	_target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const  ShrubberyCreationForm &obj);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm &rhs);
		~ShrubberyCreationForm();

		ShrubberyCreationForm(const std::string &target);
		void execute(Bureaucrat const & executor) const;

	class FileCreate: public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("[SHRUBBERYCREATIONFORM] Couldn't create the file!");
			} 
	};
};

#endif