/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 14:58:42 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/02 17:35:43 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

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

int main()
{
	ZombieHorde *Horde;
	std::srand(time(0));
	Horde = new ZombieHorde(10);
	Horde->announce();
	Horde->delete_horde();
	delete Horde;
}
