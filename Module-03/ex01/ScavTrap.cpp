/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 16:03:54 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/04 16:58:41 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cerr << "Default Constructor called\n";
}

ScavTrap::ScavTrap(std::string const name)
{
	std::cerr << "String Constructor called\n";
	Name = name;
	HPoint = 100;
	MHPoint = 100;
	EPoint = 50;
	MEPoint = 50;
	level = 1;
	MDmg = 20;
	RDmg = 15;
	Adr = 3;
}

void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cerr << "SC4V-TP "<< Name << " attacks " << target << " at range, causing " << RDmg << " points of damage!\n";
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cerr << "SC4V-TP " << Name << " attacks " << target << " with a melee attack, causing " << MDmg << " points of damage!\n";
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	float result;

	result = amount - (amount * Adr / 100);
	if (HPoint - (int)result <= 0)
		HPoint = 0;
	else
		HPoint -= (int)result;
	std::cout << "SC4V-TP " << Name << " did take " << (int)result << " of damage!\n";
	if (HPoint > 0)
		std::cout << "SC4V-TP "<< "Hit point left : " << HPoint << '\n';
	else
		std::cout << "SC4V-TP " << Name << " is dead\n";
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	int heal;
	int mem;

	mem = HPoint + amount;
	if (mem > MHPoint)
	{
		HPoint = MHPoint;
		heal = amount - (MHPoint - mem);
	}
	else
	{
		HPoint += amount;
		heal = amount;
	}
	std::cout << "SC4V-TP " << Name << " healed " << heal << "HP\n";
	std::cout << "SC4V-TP Hit Point are at : " << HPoint << '\n';
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
	std::cerr << "Destructor called\n";
}
