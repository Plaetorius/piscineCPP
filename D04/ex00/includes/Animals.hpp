/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animals.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 17:04:55 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/17 17:23:27 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMALS_HPP
# define ANIMALS_HPP
# include <string>

class Animals
{
	protected:
		std::string _type;
	public:
		Animals();
		Animals(const Animals &obj);
		virtual void makeSound() const = 0;	
		Animals& operator=(const Animals &rhs);
		~Animals();
};
#endif