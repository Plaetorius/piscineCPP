/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 20:35:51 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/23 22:28:11 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <string>
# include "Weapon.hpp"


/*
	HumanB's Weapon is a pointer as it is stated in the rules of the exercice
	that HumanB can be unarmed (points to NULL)
*/
class HumanB
{
	private:
		std::string	_name;
		Weapon*		_weapon;
	public:
		HumanB(std::string name);
		void	attack(void);
		void	setWeapon(Weapon &new_weapon);
		~HumanB(void);
};
#endif