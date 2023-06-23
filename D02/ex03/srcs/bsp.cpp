/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 13:48:53 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/23 22:53:28 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

static float	sign(Point const p1, Point const p2, Point const p3)
{
	return ((p1.getXf() - p3.getXf()) * (p2.getYf() - p3.getYf()) - (p2.getXf() - p3.getXf() * p1.getYf() - p3.getYf())); 
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	sign_1, sign_2, sign_3;
	bool	has_neg, has_pos;

	sign_1 = sign(point, a, b);
	sign_2 = sign(point, b, c);
	sign_3 = sign(point, c, a);

	has_neg = (sign_1 < 0) || (sign_2 < 0) || (sign_3 < 0);
	has_pos = (sign_1 > 0) || (sign_2 > 0) || (sign_3 > 0);
	return !(has_neg && has_pos);
}