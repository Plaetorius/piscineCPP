/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 00:21:49 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/25 16:58:38 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H


# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <string>

class Ice : public AMateria
{
	private:
		AMateria* _ptr;
	public:
		Ice();
		Ice(const  Ice &obj);
		Ice& operator=(const Ice &rhs);
		~Ice();
		Ice* clone();
		void use(ICharacter &target);
};

#endif