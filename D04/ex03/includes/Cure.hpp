/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 00:21:47 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/27 11:00:53 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H


# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <string>

class Cure : public AMateria
{
	public:
		Cure();
		Cure(const  Cure &obj);
		Cure& operator=(const Cure &rhs);
		~Cure();
		Cure(const std::string &type);
		Cure* clone() const;
		void use(ICharacter &target);
};

#endif