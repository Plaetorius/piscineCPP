/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 17:53:17 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/17 20:00:40 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat &obj);
		Cat& operator=(const Cat &rhs);
		void makeSound(void) const;
		~Cat();
};

#endif