/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 11:42:39 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/17 13:27:26 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class ClapTrap
{
	protected:
		std::string _name;
		int			_hp;
		int			_ep;
		int			_ad;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &obj);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		ClapTrap& operator=(const ClapTrap &rhs);
		~ClapTrap();
};