/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 17:16:16 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/17 17:35:14 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "Animals.hpp"

class Dog : public Animals
{
	public:
		Dog();
		Dog(const Dog &obj);
		Dog& operator=(const Dog &rhs);
		void makeSound(void) const override;
		~Dog();
};
#endif