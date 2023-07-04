/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 18:07:34 by tgernez           #+#    #+#             */
/*   Updated: 2023/07/04 12:14:35 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H
# include <string>

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
		void				tryCatchGrade(int grade);
	public:
		Bureaucrat();
		Bureaucrat(const  Bureaucrat &obj);
		Bureaucrat& operator=(const Bureaucrat &rhs);
		~Bureaucrat();
		
		Bureaucrat(const std::string& name, int grade);
		int					getGrade() const;
		const std::string	getName() const;
		void				promote();
		void				demote();

	/*
		Why do we use a const char* instead of a string?
		1. Historically
			Strings weren't introduced in CPP before 1998, but errors where
			already handled with const char* (C-style strings). To maintain
			compatibility, C-style strings got kept.
		2. Error
			Strings for the standard library in CPP allocate memory
			dynamically. However, an allocation can fail, throwing a
			std::bad_alloc error, different from the original error that
			we wanted to handle. Returning a const char* doesn't require
			allocation, and thus provides more safety and reliability.
	*/
	class GradeTooHighException: public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("The grade is too high!");
			}
	};
	
	class GradeTooLowException: public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("The grade is too low!");
			}
	};
};

std::ostream&	operator<<(std::ostream& os, const Bureaucrat &obj);

#endif