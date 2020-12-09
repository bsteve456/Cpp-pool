/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 23:42:04 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/10 00:11:23 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

void TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!\n";
}

void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *\n";
}

void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *\n";
}

ISpaceMarine * TacticalMarine::clone() const
{
	TacticalMarine *copy = new TacticalMarine;
	return (copy);
}
