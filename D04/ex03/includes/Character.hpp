/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 18:10:22 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/20 18:19:54 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

# pragma once
# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <string>

class Character : public ICharacter
{
	private:
		std::string _name;
		AMateria* _inventory[4];
		int	items;
	public:
		Character();
		Character(const  Character &obj);
		Character& operator=(const Character &rhs);
		~Character();
		const std::string &getName() const;
		void equip(AMateria* m);
		void unequip(int idx) ;
		void use(int idx, ICharacter& target);
};

#endif