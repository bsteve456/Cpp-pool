/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 12:36:00 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/02 13:51:32 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack(Pony serge)
{
	Pony one;

	one.set_color("black");
	one.set_height("1,48m");
	serge = one;
	std::cout << "Stack function start" << '\n';
	std::cout << "color : " << serge.get_color() << ", height : " << serge.get_height() << '\n';
	std::cout << "Stack function end" << '\n';

}

void	ponyOnTheHeap(Pony *serge)
{
	serge = new Pony;

	(*serge).set_color("black");
	(*serge).set_height("1,50m");
	std::cout << "Heap Function start" << '\n';
	std::cout << "color : " << (*serge).get_color() << ", height : "<< (*serge).get_height() << '\n';
	std::cout << "Heap Function end" << '\n';
	delete(serge);
}

void	Pony::set_height(std::string ht)
{
	height = ht;
}

void	Pony::set_color(std::string clr)
{
	color = clr;
}

std::string Pony::get_color()
{
	return color;
}

std::string Pony::get_height()
{
	return height;
}
