/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 17:53:17 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/28 09:32:06 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H



# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain* _brain;
	public:
		Cat();
		Cat(const Cat &obj);
		Cat& operator=(const Cat &rhs);
		void makeSound(void) const;
		~Cat();

		void	changeIdea(std::string idea, int i);
		void	displayIdeas();
};

#endif