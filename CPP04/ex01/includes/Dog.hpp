/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 18:20:02 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/28 09:32:11 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H



# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain* _brain;
	public:
		Dog();
		Dog(const  Dog &obj);
		Dog& operator=(const Dog &rhs);
		void makeSound(void) const;
		~Dog();
	
		void	changeIdea(std::string idea, int i);
		void	displayIdeas();
};

#endif