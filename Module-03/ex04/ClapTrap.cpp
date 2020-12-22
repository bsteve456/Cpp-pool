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
	this->HPoint = 0;
	this->MHPoint = 0;
	this->EPoint = 0;
	this->MEPoint = 0;
	this->level = 1;
	this->MDmg = 0;
	this->RDmg = 0;
	this->Adr = 0;
}

ClapTrap::ClapTrap(const ClapTrap &C)
{
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
	*this = C;
}

ClapTrap & ClapTrap::operator = (const ClapTrap &C)
{
	std::cout << "ClapTrap Assignment operator called" << std::endl;
	if (this != &C)
	{
		this->HPoint = C.getHPoint();
		this->MHPoint = C.getMHPoint();
		this->EPoint = C.getEPoint();
		this->MEPoint = C.getMEPoint();
		this->level = C.getLevel();
		this->Name = C.getName();
		this->MDmg = C.getMDmg();
		this->RDmg = C.getRDmg();
		this->Adr = C.getAdr();
	}
	return (*this);
}

int ClapTrap::getHPoint(void) const
{
	return (this->HPoint);
}

int ClapTrap::getMHPoint(void) const
{
	return (this->MHPoint);
}

int ClapTrap::getEPoint(void) const
{
	return (this->EPoint);
}

int	ClapTrap::getMEPoint(void) const
{
	return (this->MEPoint);
}

std::string ClapTrap::getName(void) const
{
	return (this->Name);
}

int	ClapTrap::getLevel(void) const
{
	return (this->level);
}

int ClapTrap::getMDmg(void) const
{
	return (this->MDmg);
}

int	ClapTrap::getRDmg(void) const
{
	return (this->RDmg);
}

int ClapTrap::getAdr(void) const
{
	return (this->Adr);
}

void	ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "CL4G-TP "<< this->Name << " attacks " << target << " at range, causing " << this->RDmg << " points of damage!\n";
}

void	ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "CL4G-TP " << this->Name << " attacks " << target << " with a melee attack, causing " << this->MDmg << " points of damage!\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	float result;

	result = amount - (amount * this->Adr / 100);
	if (this->HPoint - (int)result <= 0)
		this->HPoint = 0;
	else
		this->HPoint -= (int)result;
	std::cout << "CL4G-TP " << this->Name << " did take " << (int)result << " of damage!\n";
	if (this->HPoint > 0)
		std::cout << "CL4G-TP "<< "Hit point left : " << this->HPoint << '\n';
	else
		std::cout << "CL4G-TP " << this->Name << " is dead\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
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
	std::cout << "CL4G-TP " << this->Name << " healed " << heal << "HP\n";
	std::cout << "CL4G-TP Hit Point are at : " << this->HPoint << '\n';
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called\n";
}
