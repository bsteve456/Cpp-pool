/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 18:29:11 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/09 20:01:31 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{}

Character::Character(std::string const & name)
{
	this->Name = name;
	this->AP = 40;
	this->weapon = 0;
}

Character::Character(const Character &C)
{
	*this = C;
}

Character & Character::operator = (const Character &C)
{
	if(this != &C)
	{
		this->Name = C.getName();
		this->AP = C.getAP();
		this->equip(C.getWeapon());
	}
	return *this;
}

void	Character::recoverAP()
{
	if(this->AP + 10 >= 40)
	{
		std::cout << this->Name << " recover " <<  (40 - this->AP) << " AP." << std::endl;
		this->AP += 40 - this->AP;
	}
	else
	{
		std::cout << this->Name << " recover 10 AP."  << std::endl;
		this->AP += 10;
	}
}

void Character::equip(AWeapon *wep)
{
	this->weapon = wep;
}

void Character::attack(Enemy *enemy)
{
	Enemy rival = *enemy;
	std::cout << this->Name << " attacks " << rival.getType() << " with a " << this->weapon->getName() << '\n';
	if(this->weapon != 0 && AP - this->weapon->getAPCost() >= 0)
	{
		this->weapon->attack();
		this->AP -= (this->weapon->getAPCost());
		rival.takeDamage((this->weapon->getDamage()));
	}
	else
		std::cout << "Don't have enought AP or is unarmed.\n";
	*enemy = rival;
	if(rival.getHP() == 0)
		delete(enemy);
}

std::string Character::getName() const
{
	return this->Name;
}

int		Character::getAP() const
{
	return this->AP;
}

AWeapon* Character::getWeapon() const
{
	return this->weapon;
}

std::ostream& operator<<(std::ostream& os, const Character &c)
{
	AWeapon *Weapon = c.getWeapon();
	if (Weapon == 0)
		os << c.getName() << " has " << c.getAP() << " AP and is unarmed\n";
	else
		os << c.getName() << " has " << c.getAP() << " AP and wields a " << (*Weapon).getName() << '\n';
	return os;
}

Character::~Character()
{}

