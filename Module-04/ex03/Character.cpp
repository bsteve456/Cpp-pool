/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 12:08:22 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/10 14:41:52 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

std::string const & Character::getName() const
{
	return (this->Name);
}

Character::Character()
{}

Character::Character(std::string name) : ICharacter(), Name(name)
{
	this->inventory = new AMateria*[4];
	for(int i = 0; i < 4; i++)
		this->inventory[i] = 0;
}

Character::Character(const Character &C)
{
	*this = C;
}

Character & Character::operator = (const Character &C)
{
	AMateria **mem;
	if (this != &C)
	{
		mem = C.getInventory();
		for (int i = 0; i < 4; i++)
		{
			delete(this->inventory[i]);
			this->inventory[i] = 0;
		}
		for(int i = 0; i < 4; i++)
		{
			if (mem[i] != 0)
				this->equip(mem[i]->clone());
		}
	}
	return (*this);
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if(this->inventory[i] == 0)
		{
			this->inventory[i] = m;
			break;
		}
	}
}

void	Character::unequip(int idx)
{
	if(idx > 3 || idx < 0)
		return ;
	this->inventory[idx] = 0;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx > 3 || idx < 0)
		return ;
	if (this->inventory[idx] != 0)
		this->inventory[idx]->use(target);
}

AMateria **Character::getInventory() const
{
	return (this->inventory);
}

Character::~Character()
{
	for(int i = 0; i < 4; i++)
	{
		delete(this->inventory[i]);
		this->inventory[i] = 0;
	}
	delete [] this->inventory;
}
