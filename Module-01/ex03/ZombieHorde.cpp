/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 16:48:32 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/02 17:34:19 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
	Horde = new Zombie[N];
	n = N;
	for (int i = 0; i < N; i++)
	{
		Horde[i].set_type(random_type());
		Horde[i].set_name(random_name());
	}
}

void ZombieHorde::delete_horde()
{
	delete [] Horde;
}

void	ZombieHorde::announce()
{
	for (int i = 0; i < n; i++)
		Horde[i].announce();
}

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

ZombieHorde::~ZombieHorde()
{
	std::cout << "ZombieHorde destroyed" << std::endl;
	delete_horde();
}
