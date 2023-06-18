/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 00:21:49 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/19 00:21:50 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

# pragma once

class Ice
{
	private:

	public:
		Ice();
		Ice(const  Ice &obj);
		Ice& operator=(const Ice &rhs);
		~Ice();
};

#endif