/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 15:57:56 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/09 17:33:13 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon()
{
	Name = "NULL";
	APcost = 0;
	Damage = 0;
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

void	AWeapon::setName(std::string name)
{
	Name = name;
}

void	AWeapon::setAPCost(int apcost)
{
	APcost = apcost;
}

void	AWeapon::setDamage(int damage)
{
	Damage = damage;
}
void AWeapon::attack() const
{
	std::cout << "sounds effect\n";
}
