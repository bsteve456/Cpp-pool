/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 16:15:36 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/09 19:13:53 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon()
{
		this->setName("Power Fist");
		this->setAPCost(8);
		this->setDamage(50);
}

PowerFist::PowerFist(const PowerFist &P)
{
	*this = P;
}

PowerFist & PowerFist::operator = (const PowerFist &P)
{
	if (this != &P)
	{
		this->setName(P.getName());
		this->setAPCost(P.getAPCost());
		this->setDamage(P.getDamage());
	}
	return (*this);
}

PowerFist::~PowerFist()
{}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *\n";
}
