/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 17:20:26 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/05 17:36:04 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
{
	std::cout << "SuperTrap Default Constructor called\n";
}

SuperTrap::SuperTrap(std::string const name) : NinjaTrap(name), FragTrap(name)
{
	std::cout << "SuperTrap String Constructor called\n";
	this->Name = name;
	this->HPoint = FragTrap::HPoint;
	this->MHPoint = FragTrap::MHPoint;
	this->EPoint = NinjaTrap::EPoint;
	this->MEPoint = NinjaTrap::MEPoint;
	this->level = 1;
	this->MDmg = NinjaTrap::MDmg;
	this->RDmg = FragTrap::RDmg;
	this->Adr = FragTrap::Adr;
}

SuperTrap::SuperTrap(const SuperTrap &S)
{
	std::cout << "SuperTrap Copy Constructor called" << std::endl;
	*this = S;
}

SuperTrap & SuperTrap::operator = (const SuperTrap &S)
{
	std::cout << "SuperTrap Assignment operator called" << std::endl;
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

SuperTrap::~SuperTrap()
{
	std::cout << "SuperTrap Destructor called\n";
}
