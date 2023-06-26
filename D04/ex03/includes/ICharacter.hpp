/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 00:21:45 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/26 10:09:41 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_H
# define ICHARACTER_H


# include <string>

class AMateria;

class ICharacter
{
	public:
		// ICharacter();
		// ICharacter(const  ICharacter &obj);
		// ICharacter& operator=(const ICharacter &rhs);
		virtual ~ICharacter();
		virtual const std::string &getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif