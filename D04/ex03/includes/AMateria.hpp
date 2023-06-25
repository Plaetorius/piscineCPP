/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 00:13:06 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/25 19:35:31 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IAMATERIA_H
# define IAMATERIA_H


# include <string>
# include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string	_type;
	public:
		AMateria();
		AMateria(const  AMateria &obj);
		AMateria& operator=(const AMateria &rhs);
		virtual ~AMateria();
		AMateria(const std::string &type);
		const std::string &getType() const;
		virtual	AMateria* clone() const = 0;
		virtual	void use(ICharacter &target);
};

#endif