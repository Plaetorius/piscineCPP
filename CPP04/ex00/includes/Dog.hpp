/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 18:20:02 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/25 16:58:05 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H



#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const  Dog &obj);
		Dog& operator=(const Dog &rhs);
		void makeSound(void) const;
		~Dog();
};

#endif