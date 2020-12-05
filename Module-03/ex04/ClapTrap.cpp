/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 17:36:28 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/05 19:03:27 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Default Constructor called\n";
	HPoint = 0;
	MHPoint = 0;
	EPoint = 0;
	MEPoint = 0;
	level = 1;
	MDmg = 0;
	RDmg = 0;
	Adr = 0;
}

void	ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "CL4G-TP "<< Name << " attacks " << target << " at range, causing " << RDmg << " points of damage!\n";
}

void	ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "CL4G-TP " << Name << " attacks " << target << " with a melee attack, causing " << MDmg << " points of damage!\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	float result;

	result = amount - (amount * Adr / 100);
	if (HPoint - (int)result <= 0)
		HPoint = 0;
	else
		HPoint -= (int)result;
	std::cout << "CL4G-TP " << Name << " did take " << (int)result << " of damage!\n";
	if (HPoint > 0)
		std::cout << "CL4G-TP "<< "Hit point left : " << HPoint << '\n';
	else
		std::cout << "CL4G-TP " << Name << " is dead\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
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
	std::cout << "CL4G-TP " << Name << " healed " << heal << "HP\n";
	std::cout << "CL4G-TP Hit Point are at : " << HPoint << '\n';
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called\n";
}
