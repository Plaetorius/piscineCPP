/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 00:21:45 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/19 00:46:01 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

# pragma once
# include <string>
# include "AMateria.hpp"

class ICharacter
{
	private:
		std::string _name;
		AMateria _inventory[4];
	public:
		Character();
		Character(const  Character &obj);
		Character& operator=(const Character &rhs);
		virtual ~Character();
		virtual const std::string &getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif