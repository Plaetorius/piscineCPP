/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 18:20:02 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/17 20:00:45 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#pragma once

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