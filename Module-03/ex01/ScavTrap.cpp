/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 16:03:54 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/04 17:25:15 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cerr << "ScavTrap Default Constructor called\n";
}

ScavTrap::ScavTrap(std::string const name)
{
	std::cerr << "ScavTrap String Constructor called\n";
	this->Name = name;
	this->HPoint = 100;
	this->MHPoint = 100;
	this->EPoint = 50;
	this->MEPoint = 50;
	this->level = 1;
	this->MDmg = 20;
	this->RDmg = 15;
	this->Adr = 3;
}

ScavTrap::ScavTrap(const ScavTrap &S)
{
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
	this->HPoint = S.getHPoint();
	this->MHPoint = S.getMHPoint();
	this->EPoint = S.getEPoint();
	this->MEPoint = S.getMEPoint();
	this->level = S.getLevel();
	this->Name = S.getName();
	this->MDmg = S.getMDmg();
	this->RDmg = S.getRDmg();
	this->Adr = S.getAdr();
}

ScavTrap & ScavTrap::operator = (const ScavTrap &S)
{
	std::cout << "ScavTrap Assignment operator called" << std::endl;
	if (this != &S)
	{
		this->HPoint = S.getHPoint();
		this->MHPoint = S.getMHPoint();
		this->EPoint = S.getEPoint();
		this->MEPoint = S.getMEPoint();
		this->level = S.getLevel();
		this->Name = S.getName();
		this->MDmg = S.getMDmg();
		this->RDmg = S.getRDmg();
		this->Adr = S.getAdr();
	}
	return (*this);
}

int ScavTrap::getHPoint(void) const
{
	return (this->HPoint);
}

int ScavTrap::getMHPoint(void) const
{
	return (this->MHPoint);
}

int ScavTrap::getEPoint(void) const
{
	return (this->EPoint);
}

int	ScavTrap::getMEPoint(void) const
{
	return (this->MEPoint);
}

std::string ScavTrap::getName(void) const
{
	return (this->Name);
}

int	ScavTrap::getLevel(void) const
{
	return (this->level);
}

int ScavTrap::getMDmg(void) const
{
	return (this->MDmg);
}

int	ScavTrap::getRDmg(void) const
{
	return (this->RDmg);
}

int ScavTrap::getAdr(void) const
{
	return (this->Adr);
}

void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cerr << "SC4V-TP "<< this->Name << " attacks " << target << " at range, causing " << this->RDmg << " points of damage!\n";
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cerr << "SC4V-TP " << this->Name << " attacks " << target << " with a melee attack, causing " << this->MDmg << " points of damage!\n";
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	float result;

	result = amount - (amount * this->Adr / 100);
	if (this->HPoint - (int)result <= 0)
		this->HPoint = 0;
	else
		this->HPoint -= (int)result;
	std::cout << "SC4V-TP " << this->Name << " did take " << (int)result << " of damage!\n";
	if (this->HPoint > 0)
		std::cout << "SC4V-TP "<< "Hit point left : " << this->HPoint << '\n';
	else
		std::cout << "SC4V-TP " << this->Name << " is dead\n";
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	int heal;
	int mem;

	mem = this->HPoint + amount;
	if (mem > this->MHPoint)
	{
		this->HPoint = this->MHPoint;
		heal = amount - (this->MHPoint - mem);
	}
	else
	{
		this->HPoint += amount;
		heal = amount;
	}
	std::cout << "SC4V-TP " << this->Name << " healed " << heal << "HP\n";
	std::cout << "SC4V-TP Hit Point are at : " << this->HPoint << '\n';
}

void	ScavTrap::challengeNewcomer(int nb_challenge)
{
	if(nb_challenge == 0)
	{
		std::cout << "-- Challenge : Attack Two time the Golden ship. Take one hit by its cannons. Heal one time. --\n";
		this->rangedAttack("Golden Ship");
		this->rangedAttack("Golden Ship");
		this->takeDamage(rand() % 101);
		if (this->HPoint <= 0)
		{
			std::cout << "Challenge : failed retry later.\n";
			return ;
		}
		this->beRepaired(25);
		std::cout << "Challenge : success. Level up!\n";
		level += 1;
	}
	else
	{
		std::cout << "-- Challenge : Your Hits point need to be lower than 50. Heal 1 time with a random value. And take a direct hit by a dragon's(lvl 5) blast.  And Survive. --\n";
		if (this->HPoint >= 50)
		{
			std::cout << "Challenge fail to much HP.\n";
			return ;
		}
		this->beRepaired(rand() % 101);
		this->takeDamage(100);
		if (this->HPoint > 0)
		{
			std::cout << "Challenge : success. Level up two times!\n";
			this->level += 2;
		}
		else
			std::cout << "Challenge failed retry later.\n";
	}
}

ScavTrap::~ScavTrap()
{
	std::cerr << "ScavTrap Destructor called\n";
}
