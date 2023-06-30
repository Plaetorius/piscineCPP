/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 00:21:49 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/25 19:37:31 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H


# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <string>

class Ice : public AMateria
{
	public:
		Ice();
		Ice(const  Ice &obj);
		Ice& operator=(const Ice &rhs);
		~Ice();
		Ice* clone() const;
		Ice(const std::string &type);
		void use(ICharacter &target);
};

#endif