/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 20:06:07 by tgernez           #+#    #+#             */
/*   Updated: 2023/06/28 09:19:41 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H



#include <string>

class Brain
{
	private:
		std::string _ideas[100];
	public:
		Brain();
		Brain(const  Brain &obj);
		Brain& operator=(const Brain &rhs);
		~Brain();

		void	changeIdea(std::string idea, int i);
		void	displayIdeas();
};

#endif