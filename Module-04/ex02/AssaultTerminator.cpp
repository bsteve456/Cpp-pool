/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 23:42:04 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/10 10:20:58 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() : ISpaceMarine()
{
	std::cout << "* teleports from space *\n";
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I'll be back...\n";
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &A)
{
	*this = A;
}

AssaultTerminator & AssaultTerminator::operator = (const AssaultTerminator &A)
{
	(void)A;
	return *this;
}


void AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean PURIFY IT!\n";
}

void AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *\n";
}

void AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *\n";
}

ISpaceMarine * AssaultTerminator::clone() const
{
	AssaultTerminator *copy = new AssaultTerminator(*this);
	return (copy);
}
