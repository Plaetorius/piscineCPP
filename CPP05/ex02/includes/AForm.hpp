/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:50:09 by tgernez           #+#    #+#             */
/*   Updated: 2023/07/04 16:22:20 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H
# include <string>

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_sign_grade;
		const int			_exec_grade;
	public:
		Form();
		Form(const  Form &obj);
		Form& operator=(const Form &rhs);
		~Form();

		Form(const std::string& name, const int sign_grade, const int exec_grade);
		const std::string	getName() const;
		bool				getSigned() const;
		int					getSignGrade() const;
		int					getExecGrade() const;
		void				beSigned(const Bureaucrat& bureaucrat);
		
		
	/*
		Added [] for readibility
	*/
	class GradeTooHighException: public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("[FORM] Grade is too high!");
			}
	};
	class GradeTooLowException: public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("[FORM] Grade is too low!");
			}
	};
};

std::ostream&	operator<<(std::ostream& os, const Form &obj);

#endif