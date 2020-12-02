/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 14:58:42 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/02 15:52:12 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

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
	Zombie *new1;
	Zombie next;

	if (i == 1)
	{
		event.setZombieType(random_type());
		new1 = event.newZombie(random_name());
		(*new1).announce();
		delete(new1);
	}
	else
	{
		next.set_name(random_name());
		next.set_type(random_type());
		next.announce();
	}
}

int main()
{
	std::srand(time(0));
	randomChump();
	randomChump();
	randomChump();
	randomChump();
	randomChump();
	randomChump();

}
