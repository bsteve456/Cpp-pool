/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 23:42:04 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/10 00:11:01 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

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
	AssaultTerminator *copy = new AssaultTerminator;
	return (copy);
}
