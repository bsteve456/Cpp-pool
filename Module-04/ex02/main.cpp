/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 00:06:30 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/10 00:33:28 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"
#include "Squad.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = bob->clone();
	ISpaceMarine* joe = new AssaultTerminator;
	ISquad* vlc = new Squad;
	ISpaceMarine* bob2 = new TacticalMarine;
	vlc->push(bob);
	vlc->push(jim);
	vlc->push(joe);
/*	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}*/
	ISquad *lc = new Squad;
	lc->push(bob2);
	lc = vlc;
	for (int i = 0; i < lc->getCount(); ++i)
	{
		ISpaceMarine* cur1 = lc->getUnit(i);
		cur1->battleCry();
		cur1->rangedAttack();
		cur1->meleeAttack();
	}
	delete lc;
	//delete(vlc);
	return (0);
}
