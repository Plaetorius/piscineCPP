/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:24:10 by tgernez           #+#    #+#             */
/*   Updated: 2023/07/05 10:55:39 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H
# include "AForm.hpp"
# include "Bureaucrat.hpp"
# include <string>

class PresidentialPardonForm : public Form
{
	private:
		std::string	_target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const  PresidentialPardonForm &obj);
		PresidentialPardonForm& operator=(const PresidentialPardonForm &rhs);
		~PresidentialPardonForm();

		PresidentialPardonForm(const std::string &target);
		void execute(Bureaucrat const & executor) const;
};

#endif