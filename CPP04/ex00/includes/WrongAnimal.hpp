/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 17:04:55 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/17 19:59:19 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <string>

/*
	Comme la classe Animal mais sans le keyword "virtual"
*/

class WrongAnimal
{
	protected:
		std::string _type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &obj);
		void makeSound() const;	
		const std::string getType() const;
		WrongAnimal& operator=(const WrongAnimal &rhs);
		~WrongAnimal();
};
#endif