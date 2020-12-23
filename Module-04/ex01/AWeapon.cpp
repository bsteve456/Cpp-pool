/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 15:57:56 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/09 18:56:20 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon() : Name("NULL"), APcost(0), Damage(0)
{}

AWeapon::AWeapon(const AWeapon &W)
{
	*this = W;
}

AWeapon & AWeapon::operator = (const AWeapon &W)
{
	if (this != &W)
	{
		this->Name = W.getName();
		this->APcost = W.getAPCost();
		this->Damage = W.getDamage();
	}
	return (*this);
}

AWeapon::~AWeapon()
{}

std::string AWeapon::getName() const
{
	return (this->Name);
}

int AWeapon::getAPCost() const
{
	return (this->APcost);
}

int AWeapon::getDamage() const
{
	return (this->Damage);
}

void	AWeapon::setName(std::string name)
{
	this->Name = name;
}

void	AWeapon::setAPCost(int apcost)
{
	this->APcost = apcost;
}

void	AWeapon::setDamage(int damage)
{
	this->Damage = damage;
}
void AWeapon::attack() const
{
	std::cout << "sounds effect\n";
}
