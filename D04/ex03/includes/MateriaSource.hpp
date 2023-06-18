/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 00:21:51 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/19 00:21:52 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

# pragma once

class MateriaSource
{
	private:

	public:
		MateriaSource();
		MateriaSource(const  MateriaSource &obj);
		MateriaSource& operator=(const MateriaSource &rhs);
		~MateriaSource();
};

#endif