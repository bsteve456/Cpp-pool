/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 16:49:10 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/09 17:52:42 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy() : HP(0), Type("NULL")
{}

Enemy::~Enemy()
{}

Enemy::Enemy(const Enemy &E)
{
	*this = E;
}

Enemy & Enemy::operator = (const Enemy &E)
{
	if (this != &E)
	{
		HP = E.getHP();
		Type = E.getType();
	}
	return (*this);
}

std::string Enemy::getType() const
{
	return (Type);
}

int Enemy::getHP() const
{
	return (HP);
}

void Enemy::setType(std::string type)
{
	Type = type;
}

void Enemy::setHP(int hp)
{
	HP = hp;
}

void Enemy::takeDamage(int n)
{
	if (HP - n <= 0)
		HP = 0;
	else
		HP -= n;
}
