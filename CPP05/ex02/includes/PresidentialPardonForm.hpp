/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:24:10 by tgernez           #+#    #+#             */
/*   Updated: 2023/07/05 12:58:31 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H
# include "AForm.hpp"
# include "Bureaucrat.hpp"
# include <string>

class PresidentialPardonForm : public AForm
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
		std::string getTarget() const;

};

std::ostream&	operator<<(std::ostream& os, const PresidentialPardonForm &obj);

#endif