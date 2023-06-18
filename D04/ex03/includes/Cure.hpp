/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 00:21:47 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/19 00:21:48 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

# pragma once

class Cure
{
	private:

	public:
		Cure();
		Cure(const  Cure &obj);
		Cure& operator=(const Cure &rhs);
		~Cure();
};

#endif