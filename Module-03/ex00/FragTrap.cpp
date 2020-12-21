/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 14:03:44 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/04 15:31:17 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Default Constructor called\n";
}

FragTrap::FragTrap(const FragTrap &F)
	std::cout << "Copy Constructor called" << std::endl;
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
	std::cout << "Assignment operator called" << std::endl;
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

FragTrap::FragTrap(std::string const name)
{
	std::cout << "String Constructor called\n";
	Name = name;
	HPoint = 100;
	MHPoint = 100;
	EPoint = 100;
	MEPoint = 100;
	level = 1;
	MDmg = 30;
	RDmg = 20;
	Adr = 5;
}

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP "<< Name << " attacks " << target << " at range, causing " << RDmg << " points of damage!\n";
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << Name << " attacks " << target << " with a melee attack, causing " << MDmg << " points of damage!\n";
}

void	FragTrap::takeDamage(unsigned int amount)
{
	float result;

	result = amount - (amount * Adr / 100);
	if (HPoint - (int)result <= 0)
		HPoint = 0;
	else
		HPoint -= (int)result;
	std::cout << "FR4G-TP " << Name << " did take " << (int)result << " of damage!\n";
	if (HPoint > 0)
		std::cout << "FR4G-TP "<< "Hit point left : " << HPoint << '\n';
	else
		std::cout << "FR4G-TP " << Name << " is dead\n";
}

void	FragTrap::beRepaired(unsigned int amount)
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
	std::cout << "FR4G-TP " << Name << " healed " << heal << "HP\n";
	std::cout << "FR4G-TP Hit Point are at : " << HPoint << '\n';
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	static const  char* const type[5] = {"UnderWater", "Air", "Punch", "Attack", "Forest"};
	std::string result;

	result = type[rand() % 5];
	if (EPoint - 25 >= 0)
	{
		EPoint -= 25;
		std::cout << "FR4G-TP " << Name << " did a(n) " << result << " attack on " << target << ", causing 50 points of damage!\n";
	}
	else
		std::cout << "FR4G-TP " << Name <<" have " << EPoint << " Energy Point left, need 25\n";
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor called\n";
}
