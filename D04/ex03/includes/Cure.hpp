/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 00:21:47 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/19 00:46:08 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

# pragma once
# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <string>

class Cure : public AMateria
{
	private:

	public:
		Cure();
		Cure(const  Cure &obj);
		Cure& operator=(const Cure &rhs);
		~Cure();
		Cure* clone();
		void use(ICharacter &target);
};

#endif