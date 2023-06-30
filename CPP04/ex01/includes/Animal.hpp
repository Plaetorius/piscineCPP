/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 17:04:55 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/17 19:14:56 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <string>

class Animal
{
	protected:
		std::string _type;
	public:
		Animal();
		Animal(const Animal &obj);
		virtual void makeSound() const;	
		const std::string getType() const;
		Animal& operator=(const Animal &rhs);
		virtual ~Animal();
};
#endif