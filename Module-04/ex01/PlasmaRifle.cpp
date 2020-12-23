/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 16:15:36 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/09 19:13:17 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon()
{
	this->setName("Plasma Rifle");
	this->setAPCost(5);
	this->setDamage(21);
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &P)
{
	*this = P;
}

PlasmaRifle & PlasmaRifle::operator = (const PlasmaRifle &P)
{
	if (this != &P)
	{
		this->setName(P.getName());
		this->setAPCost(P.getAPCost());
		this->setDamage(P.getDamage());
	}
	return (*this);
}

PlasmaRifle::~PlasmaRifle()
{}

void PlasmaRifle::attack() const
{
	std::cout << "* piouu piouuu piouuu *\n";
}
