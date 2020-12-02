/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 14:46:37 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/02 15:48:52 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string mem_type)
{
	mem = mem_type;
}

std::string	ZombieEvent::getZombieType()
{
	return (mem);
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	Zombie *new1 = new Zombie;

	(*new1).set_name(name);
	(*new1).set_type(mem);
	return (new1);
}
