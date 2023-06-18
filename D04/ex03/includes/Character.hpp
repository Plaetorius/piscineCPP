/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 00:21:45 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/19 00:21:46 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

# pragma once

class Character
{
	private:

	public:
		Character();
		Character(const  Character &obj);
		Character& operator=(const Character &rhs);
		~Character();
};

#endif