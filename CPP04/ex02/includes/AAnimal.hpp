/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 17:04:55 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/17 19:14:56 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
# define AAnimal_HPP
# include <string>

class AAnimal
{
	protected:
		std::string _type;
	public:
		AAnimal();
		AAnimal(const AAnimal &obj);
		virtual void makeSound() const = 0;	
		const std::string getType() const;
		AAnimal& operator=(const AAnimal &rhs);
		virtual ~AAnimal();
};
#endif