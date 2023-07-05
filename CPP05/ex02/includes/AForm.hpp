/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:50:09 by tgernez           #+#    #+#             */
/*   Updated: 2023/07/05 12:58:54 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H
# include <string>
# ifndef TEST_MODE
#  define TEST_MODE 0
# endif

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_sign_grade;
		const int			_exec_grade;
	public:
		AForm();
		AForm(const  AForm &obj);
		AForm& operator=(const AForm &rhs);
		virtual ~AForm(); //The destructor is turned virtual to make sure that we call the proper destructor (cf CPP04)

		AForm(const std::string& name, const int sign_grade, const int exec_grade);
		const std::string	getName() const;
		bool				getSigned() const;
		int					getSignGrade() const;
		int					getExecGrade() const;
		void				beSigned(const Bureaucrat& bureaucrat);

		virtual void execute(Bureaucrat const & executor) const = 0;
		
		
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

	class FormNotSigned: public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("[FORM] Form isn't signed!");
			} 
	};
};

std::ostream&	operator<<(std::ostream& os, const AForm &obj);

#endif