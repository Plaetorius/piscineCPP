/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 20:35:51 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/23 22:27:44 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <string>
# include "Weapon.hpp"


/*
	HumanA's Weapon is a reference as the rules state that: "HumanA must alwaysbe armed"
	or something along the line of that ; a reference can't be NULL
*/
class HumanA
{
	private:
		std::string	_name;
		Weapon&		_weapon;
	public:
		HumanA(std::string name, Weapon &weapon);
		void	attack(void);
		~HumanA(void);
};
#endif