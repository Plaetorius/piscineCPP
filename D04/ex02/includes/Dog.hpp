/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 18:20:02 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/27 19:13:03 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H



# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
	private:
		Brain* _brain;
	public:
		Dog();
		Dog(const  Dog &obj);
		Dog& operator=(const Dog &rhs);
		void makeSound(void) const;
		~Dog();

		void	change_idea(std::string idea, int i);
		void	display_ideas();
};

#endif