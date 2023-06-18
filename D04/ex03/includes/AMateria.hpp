/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 00:13:06 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/19 00:21:45 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

# pragma once
# include <string>

class AMateria
{
	protected:

	public:
		AMateria();
		AMateria(const  AMateria &obj);
		AMateria& operator=(const AMateria &rhs);
		~AMateria();
		AMateria(const std::string &type);
		const std::string &getType() const;
		virtual	AMateria* clone() = 0;
		virtual	void use(ICharacter &target);
};

#endif