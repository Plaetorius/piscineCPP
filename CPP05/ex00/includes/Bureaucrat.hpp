/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 18:07:34 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/30 14:03:08 by tgernez          ###   ########.fr       */
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
		int					getGrade() const;
		const std::string	getName() const;
};

std::ostream&	operator<<(std::ostream& os, const Bureaucrat &obj);

#endif