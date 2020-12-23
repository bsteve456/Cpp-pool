/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 23:42:04 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/10 10:20:41 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine() : ISpaceMarine()
{
	std::cout << "Tactical Marine ready for battle!\n";
}

TacticalMarine::TacticalMarine(const TacticalMarine &T)
{
	*this = T;
}

TacticalMarine & TacticalMarine::operator = (const TacticalMarine &T)
{
	(void)T;
	return (*this);
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh...\n";
}

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
	TacticalMarine *copy = new TacticalMarine(*this);
	return (copy);
}
