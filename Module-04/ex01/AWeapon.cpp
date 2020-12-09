/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 15:57:56 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/09 16:11:36 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string & name, int apcost, int damage)
{
	Name = name;
	APcost = apcost;
	Damage = damage;
}

AWeapon::~AWeapon()
{}

int AWeapon::getName() const
{
	return (Name);
}

int AWeapon::getAPCost() const
{
	return (APcost);
}

int AWeapon::getDamage() const
{
	return (Damage);
}

void AWeapon::attack() const
{
	std::cout << "sounds effect\n";
}
