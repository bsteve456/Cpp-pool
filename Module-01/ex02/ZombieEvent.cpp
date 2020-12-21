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

ZombieEvent::~ZombieEvent()
{}

std::string random_type()
{
	static const  char* const type[4] = {"Warrior", "Mage", "Archer", "Healer"};
	std::string result;

	result = type[rand() % 4];
	return result;
}

std::string random_name()
{
	static std::string charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
	std::string result;
	result.resize(10);
	for (int i = 0; i < 10; i++)
		result[i] = charset[rand() % charset.length()];
	return result;
}

void randomChump()
{
	int i = rand() % 2;
	ZombieEvent event;

	if (i == 1)
	{
		std::cout << "Heap Zombie" << std::endl;
		Zombie *new1;
		event.setZombieType(random_type());
		new1 = event.newZombie(random_name());
		(*new1).announce();
		delete(new1);
	}
	else
	{
		std::cout << "Stack Zombie" << std::endl;
		Zombie next;
		next.set_name(random_name());
		next.set_type(random_type());
		next.announce();
	}
}
