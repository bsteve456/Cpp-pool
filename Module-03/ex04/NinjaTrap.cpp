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

NinjaTrap::	NinjaTrap(std::string const name) : ClapTrap()
{
	std::cout << "NinjaTrap String Constructor called\n";
	Name = name;
	HPoint = 60;
	MHPoint = 60;
	EPoint = 120;
	MEPoint = 120;
	level = 1;
	MDmg = 60;
	RDmg = 5;
	Adr = 0;
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

void	NinjaTrap::ninjaShoebox(NinjaTrap &s)
{
	std::cout << Name << " heals " << s.Name << '\n';
	s.beRepaired(20);
}

void	NinjaTrap::ninjaShoebox(ScavTrap &s)
{
	std::cout << Name << " secretly attack " << s.Name << '\n';
	meleeAttack(s.Name);
	s.takeDamage(MDmg);
	meleeAttack(s.Name);
	s.takeDamage(MDmg);
}

void	NinjaTrap::ninjaShoebox(FragTrap &s)
{
	std::cout << Name << " and " << s.Name << " attack each other at range\n";
	rangedAttack(s.Name);
	s.takeDamage(RDmg);
	s.rangedAttack(Name);
	takeDamage(s.RDmg);
	std::cout << "The battle stop\n";
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "NinjaTrap Destructor called\n";
}
