/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:31:05 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/15 13:15:26 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl my_harl;
	
	my_harl.complain("DEBUG");
	my_harl.complain("INFO");
	my_harl.complain("WARNING");
	my_harl.complain("ERROR");
	my_harl.complain("ohio");
	return (0);
}