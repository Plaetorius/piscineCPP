/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 17:53:17 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/27 20:50:51 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H



# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
	private:
		Brain* _brain;
	public:
		Cat();
		Cat(const Cat &obj);
		Cat& operator=(const Cat &rhs);
		void makeSound(void) const;
		~Cat();

		void	change_idea(std::string idea, int i);
		void	display_ideas();
		Brain*	get_brain();
};

#endif