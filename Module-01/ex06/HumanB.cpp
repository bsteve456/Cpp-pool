/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 11:34:11 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/03 12:42:13 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name1)
{
	name = name1;
}

void	HumanB::setWeapon(Weapon &wep)
{
	weapon = &wep;
}

void	HumanB::attack()
{
	std::cout << name << " attacks with his " << (*weapon).getType() << '\n';
}

HumanB::~HumanB()
{}
