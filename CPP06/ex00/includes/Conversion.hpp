/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 17:09:52 by tgernez           #+#    #+#             */
/*   Updated: 2023/07/12 17:56:22 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_H
# define CONVERSION_H
# include <string>

enum Types
{
	CHAR = 0,
	INT,
	FLOAT,
	DOUBLE,
	UNKNOWN
};

class Conversion
{
	private:

	public:
		Conversion();
		Conversion(const  Conversion &obj);
		Conversion& operator=(const Conversion &rhs);
		~Conversion();

		static void convert(const std::string &str);
};

/*
	Defining printing functions (in printers.cpp)
*/
void	printStrToChar(const std::string &str);

#endif