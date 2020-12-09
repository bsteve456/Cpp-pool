/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 16:03:54 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/04 18:03:59 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cerr << "ScavTrap Default Constructor called\n";
}

void	ScavTrap::challengeNewcomer(int nb_challenge)
{
	if(nb_challenge == 0)
	{
		std::cout << "-- Challenge : Attack Two time the Golden ship. Take one hit by its cannons. Heal one time. --\n";
		rangedAttack("Golden Ship");
		rangedAttack("Golden Ship");
		takeDamage(rand() % 101);
		if (HPoint <= 0)
		{
			std::cout << "Challenge : failed retry later.\n";
			return ;
		}
		beRepaired(25);
		std::cout << "Challenge : success. Level up!\n";
		level += 1;
	}
	else
	{
		std::cout << "-- Challenge : Your Hits point need to be lower than 50. Heal 1 time with a random value. And take a direct hit by a dragon's(lvl 5) blast.  And Survive. --\n";
		if (HPoint >= 50)
		{
			std::cout << "Challenge fail to much HP.\n";
			return ;
		}
		beRepaired(rand() % 101);
		takeDamage(100);
		if (HPoint > 0)
		{
			std::cout << "Challenge : success. Level up two times!\n";
			level += 2;
		}
		else
			std::cout << "Challenge failed retry later.\n";
	}
}

ScavTrap::~ScavTrap()
{
	std::cerr << "ScavTrap Destructor called\n";
}