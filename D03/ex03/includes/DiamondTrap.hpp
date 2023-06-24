/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 11:18:27 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/24 12:09:54 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# pragma once
# include <string>

class DiamondTrap : public FragTrap, public ScavTrap 
{
	private:
		std::string	_name;
	public:
		DiamondTrap();
		DiamondTrap(const  DiamondTrap &obj);
		DiamondTrap& operator=(const DiamondTrap &rhs);
		~DiamondTrap();
		DiamondTrap(std::string name);
		void	whoAmI(void);
};

#endif