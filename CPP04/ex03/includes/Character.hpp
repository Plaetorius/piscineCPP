/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 18:10:22 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/27 13:31:08 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H
# define INVENTORY_SIZE 4

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <string>

class Character : public ICharacter
{
	private:
		std::string _name;
		AMateria*	_inventory[INVENTORY_SIZE];
		AMateria*	_trash;
		void 		push_trash(int idx, AMateria *to_trash);
		bool		check_slot(int idx);
		int 		count_items();
	public:
		Character();
		Character(const  Character &obj);
		Character& operator=(const Character &rhs);
		~Character();
		Character(std::string name);

		const std::string &getName() const;
		void equip(AMateria* m);
		void unequip(int idx) ;
		void use(int idx, ICharacter& target);
		void display_trash();
		void display_inventory();
		void empty_inventory();
};

#endif