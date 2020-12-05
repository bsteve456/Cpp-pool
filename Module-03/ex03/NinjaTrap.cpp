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
