/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 00:21:51 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/25 16:58:38 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_H
# define IMATERIASOURCE_H



class IMateriaSource
{
	private:

	public:
		IMateriaSource();
		IMateriaSource(const  IMateriaSource &obj);
		IMateriaSource& operator=(const IMateriaSource &rhs);
		~IMateriaSource();
};

#endif