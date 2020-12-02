/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 14:36:21 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/02 14:56:59 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::set_type(std::string tp)
{
	type = tp;
}

void	Zombie::set_name(std::string nm)
{
	name = nm;
}

std::string	Zombie::get_name()
{
	return (name);
}

std::string	Zombie::get_type()
{
	return (type);
}

void	Zombie::announce()
{
	std::cout << "<" << name << " (" << type << ")> Braiiiiiiinnnssss...\n";
}
