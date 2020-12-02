/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 18:58:46 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/03 00:37:01 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() : brain()
{}

void	addr(long hside, long *bside)
{
	static long n = 0;
	
	if (bside == 0)
		n = hside;
	else
		*bside = n;
}

std::string	Human::identify()
{
	addr((long)&brain, 0);
	return (brain.identify());
}

Brain	Human::getBrain()
{
	return (brain);
}
