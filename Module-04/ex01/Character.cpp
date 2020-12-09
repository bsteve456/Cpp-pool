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

void	Character::recoverAP()
{
	AP = 40;
}

void Character::equip(AWeapon *wep)
{
	weapon = wep;
}

void Character::attack(Enemy *enemy)
{
	Enemy rival = *enemy;
	std::cout << Name << " attacks " << rival.getType() << " with a " << (*weapon).getName() << '\n';
	if(weapon != 0 && AP - (*weapon).getAPCost() >= 0)
	{
		(*weapon).attack();
		AP -= (*weapon).getAPCost();
		rival.takeDamage((*weapon).getDamage());
	}
	else
		std::cout << "Don't have enought AP or is unarmed.\n";
	*enemy = rival;
	if(rival.getHP() == 0)
		delete(enemy);
}

std::string Character::getName() const
{
	return Name;
}

int		Character::getAP() const
{
	return AP;
}

AWeapon* Character::getWeapon() const
{
	return weapon;
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

