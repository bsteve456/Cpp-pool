/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 14:03:44 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/04 18:04:08 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap Default Constructor called\n";
}

FragTrap::FragTrap(std::string const name) : ClapTrap(name)
{
	std::cout << "FragTrap String Constructor called\n";
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
	std::cout << "FragTrap Destructor called\n";
}
