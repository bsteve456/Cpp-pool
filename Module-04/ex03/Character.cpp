/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 12:08:22 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/10 12:44:30 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

std::string const & Character::getName() const
{
	return (Name);
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if(inventory[i] == 0)
		{
			inventory[i] = m;
			break;
		}
	}
}

void	Character::unequip(int idx)
{
	if(idx > 3 || idx < 0)
		return ;
	inventory[idx] = 0;
}

void	Character::use(int idx, ICharacter &target)
{

	AMateria *n;

	if (idx > 3 || idx < 0)
		return ;
	if (inventory[idx] != 0)
		inventory[idx].use(target.getName());
}

Character::~Character()
{
	for(int i = 0; i < 4; i++)
		delete(inventory[i]);
	delete(inventory);
}
