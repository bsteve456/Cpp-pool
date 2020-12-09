/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 16:49:10 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/09 17:43:55 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

std::string Enemy::getType() const
{
	return (Type);
}

int Enemy::getHP() const
{
	return (HP);
}

void takeDamage(int n)
{
	if (HP - n <= 0)
		HP = 0;
	else
		HP -= n;
}
