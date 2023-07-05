/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:24:14 by tgernez           #+#    #+#             */
/*   Updated: 2023/07/05 11:50:24 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H
# include "AForm.hpp"
# include "Bureaucrat.hpp"
# include <string>

class RobotomyRequestForm : public Form
{
	private:
		std::string	_target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const  RobotomyRequestForm &obj);
		RobotomyRequestForm& operator=(const RobotomyRequestForm &rhs);
		~RobotomyRequestForm();

		RobotomyRequestForm(const std::string &target);
		void execute(Bureaucrat const & executor) const;
		std::string getTarget() const;

};

std::ostream&	operator<<(std::ostream& os, const RobotomyRequestForm &obj);

#endif