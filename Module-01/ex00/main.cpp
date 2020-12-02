/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 12:50:56 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/02 13:50:17 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

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

int main()
{
	Pony one;
	one.set_color("none");
	one.set_height("0m");
	ponyOnTheHeap(&one);
	std::cout << "Main function start" << '\n';
	std::cout << "color : " << one.get_color() << ", height : " << one.get_height() << '\n';
	std::cout << "Main function end" << '\n';
	ponyOnTheStack(one);
	std::cout << "Main function start" << '\n';
	std::cout << "color : " << one.get_color() << ", height  : " << one.get_height() << '\n';
	std::cout << "Main function end" << '\n';
}
