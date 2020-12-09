/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 18:29:11 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/09 18:48:04 by stbaleba         ###   ########.fr       */
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
	std::cout << Name << " attacks " << enemy.getType() << " with a " << (*weapon).Name << '\n';
	if(weapon != 0)
	{
		(*weapon).attack();
		AP -= (*weapon).getAPCost();
	}
	enemy.takeDamage((*weapon).getDamage());
	if(enemy.getHP() == 0)
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

AWeapon* Character::getWeapon()
{
	return weapon;
}

std::ostream& operator<<(std::ostream& os, const Character &c)
{
	Weapon = c.getWeapon();
	if (Weapon == 0)
		os << Name << " has " << AP << " AP and is unarmed\n';
	else
		os << Name << " has " << AP << " AP and wields a " << (*Weapon).getName() << '\n';
	return os;
}

