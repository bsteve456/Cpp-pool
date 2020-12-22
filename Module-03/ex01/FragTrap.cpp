/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 14:03:44 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/04 17:26:09 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap Default Constructor called\n";
}

FragTrap::FragTrap(std::string const name)
{
	std::cout << "FrapTrap String Constructor called\n";
	this->Name = name;
	this->HPoint = 100;
	this->MHPoint = 100;
	this->EPoint = 100;
	this->MEPoint = 100;
	this->level = 1;
	this->MDmg = 30;
	this->RDmg = 20;
	this->Adr = 5;
}

FragTrap::FragTrap(const FragTrap &F)
{
	std::cout << "FragTrap Copy Constructor called" << std::endl;
	this->HPoint = F.getHPoint();
	this->MHPoint = F.getMHPoint();
	this->EPoint = F.getEPoint();
	this->MEPoint = F.getMEPoint();
	this->level = F.getLevel();
	this->Name = F.getName();
	this->MDmg = F.getMDmg();
	this->RDmg = F.getRDmg();
	this->Adr = F.getAdr();
}

FragTrap & FragTrap::operator = (const FragTrap &F)
{
	std::cout << "FragTrap Assignment operator called" << std::endl;
	if (this != &F)
	{
		this->HPoint = F.getHPoint();
		this->MHPoint = F.getMHPoint();
		this->EPoint = F.getEPoint();
		this->MEPoint = F.getMEPoint();
		this->level = F.getLevel();
		this->Name = F.getName();
		this->MDmg = F.getMDmg();
		this->RDmg = F.getRDmg();
		this->Adr = F.getAdr();
	}
	return (*this);
}

int FragTrap::getHPoint(void) const
{
	return (this->HPoint);
}

int FragTrap::getMHPoint(void) const
{
	return (this->MHPoint);
}

int FragTrap::getEPoint(void) const
{
	return (this->EPoint);
}

int	FragTrap::getMEPoint(void) const
{
	return (this->MEPoint);
}

std::string FragTrap::getName(void) const
{
	return (this->Name);
}

int	FragTrap::getLevel(void) const
{
	return (this->level);
}

int FragTrap::getMDmg(void) const
{
	return (this->MDmg);
}

int	FragTrap::getRDmg(void) const
{
	return (this->RDmg);
}

int FragTrap::getAdr(void) const
{
	return (this->Adr);
}

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP "<< this->Name << " attacks " << target << " at range, causing " << this->RDmg << " points of damage!\n";
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->Name << " attacks " << target << " with a melee attack, causing " << this->MDmg << " points of damage!\n";
}

void	FragTrap::takeDamage(unsigned int amount)
{
	float result;

	result = amount - (amount * this->Adr / 100);
	if (this->HPoint - (int)result <= 0)
		this->HPoint = 0;
	else
		this->HPoint -= (int)result;
	std::cout << "FR4G-TP " << this->Name << " did take " << (int)result << " of damage!\n";
	if (this->HPoint > 0)
		std::cout << "FR4G-TP "<< "Hit point left : " << this->HPoint << '\n';
	else
		std::cout << "FR4G-TP " << this->Name << " is dead\n";
}

void	FragTrap::beRepaired(unsigned int amount)
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
	std::cout << "FR4G-TP " << this->Name << " healed " << heal << "HP\n";
	std::cout << "FR4G-TP Hit Point are at : " << this->HPoint << '\n';
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	static const  char* const type[5] = {"UnderWater", "Air", "Punch", "Attack", "Forest"};
	std::string result;

	result = type[rand() % 5];
	if (this->EPoint - 25 >= 0)
	{
		this->EPoint -= 25;
		std::cout << "FR4G-TP " << this->Name << " did a(n) " << result << " attack on " << target << ", causing 50 points of damage!\n";
	}
	else
		std::cout << "FR4G-TP " << this->Name <<" have " << this->EPoint << " Energy Point left, need 25\n";
}

FragTrap::~FragTrap()
{
	std::cout << "FrapTrap Destructor called\n";
}
