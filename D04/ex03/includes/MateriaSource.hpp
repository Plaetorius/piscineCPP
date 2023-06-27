/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 14:06:07 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/27 15:35:24 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H
# include "IMateriaSource.hpp"
# include "AMateria.hpp"
# define MATERIAS_SIZE 4

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* 	_materias[MATERIAS_SIZE];
	public:
		MateriaSource();
		MateriaSource(const  MateriaSource &obj);
		MateriaSource& operator=(const MateriaSource &rhs);
		~MateriaSource();

 		void		learnMateria(AMateria* m);
		bool		is_in_materias(const std::string &type);
 		AMateria*	createMateria(std::string const &type);
		void 		display_materias();
};

#endif