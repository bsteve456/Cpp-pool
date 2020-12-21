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
	Name = name;
	HPoint = FragTrap::HPoint;
	MHPoint = FragTrap::MHPoint;
	EPoint = NinjaTrap::EPoint;
	MEPoint = NinjaTrap::MEPoint;
	level = 1;
	MDmg = NinjaTrap::MDmg;
	RDmg = FragTrap::RDmg;
	Adr = FragTrap::Adr;
}


SuperTrap::~SuperTrap()
{
	std::cout << "SuperTrap Destructor called\n";
}
