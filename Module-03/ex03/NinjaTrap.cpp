/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 16:23:54 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/05 16:52:52 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
{
	std::cout << "NinjaTrap Default Constructor called\n";
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &s)
{
	std::cout << Name << " heals " << s.Name << '\n';
	s.beRepaired(20);
}

NinjaTrap::NinjaTrap(std::string const name) :
	ClapTrap(name)
{
	std::cout << "NinjaTrap String Constructor called\n";
	this->Name = name;
	this->HPoint = 60;
	this->MHPoint = 60;
	this->EPoint = 120;
	this->MEPoint = 120;
	this->level = 1;
	this->MDmg = 60;
	this->RDmg = 5;
	this->Adr = 0;
}

NinjaTrap::NinjaTrap(const NinjaTrap &G)
{
	std::cout << "NinjaTrap Copy Constructor called" << std::endl;
	*this = G;
}

NinjaTrap & NinjaTrap::operator = (const NinjaTrap &G)
{
	std::cout << "NinjaTrap Assignment operator called" << std::endl;
	if (this != &G)
	{
		this->HPoint = G.getHPoint();
		this->MHPoint = G.getMHPoint();
		this->EPoint = G.getEPoint();
		this->MEPoint = G.getMEPoint();
		this->level = G.getLevel();
		this->Name = G.getName();
		this->MDmg = G.getMDmg();
		this->RDmg = G.getRDmg();
		this->Adr = G.getAdr();
	}
	return (*this);
}

void	NinjaTrap::ninjaShoebox(ScavTrap &s)
{
	std::cout << this->Name << " secretly attack " << s.Name << '\n';
	this->meleeAttack(s.Name);
	s.takeDamage(this->MDmg);
	this->meleeAttack(s.Name);
	s.takeDamage(this->MDmg);
}
void	NinjaTrap::ninjaShoebox(FragTrap &s)
{
	std::cout << this->Name << " and " << s.Name << " attack each other at range\n";
	this->rangedAttack(s.Name);
	s.takeDamage(this->RDmg);
	s.rangedAttack(this->Name);
	this->takeDamage(s.RDmg);
	std::cout << "The battle stop\n";
}
NinjaTrap::~NinjaTrap()
{
	std::cout << "NinjaTrap Destructor called\n";
}
