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
	std::cout << "\n     -----FIRST PART-----\n" << std::endl;
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = bob->clone();
	ISpaceMarine* joe = new AssaultTerminator;
	ISquad* vlc = new Squad;
	ISpaceMarine* bob2 = new TacticalMarine;
	vlc->push(bob);
	vlc->push(jim);
	vlc->push(joe);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << "\n     -----SECOND PART-----\n" << std::endl;
	Squad lc = *vlc;
	for (int i = 0; i < lc.getCount(); ++i)
	{
		ISpaceMarine* cur1 = lc.getUnit(i);
		cur1->battleCry();
		cur1->rangedAttack();
		cur1->meleeAttack();
	}
	std::cout << "\n     -----THIRD PART-----\n" << std::endl;
	Squad lc2;
	lc2.push(bob2);
	lc2 = *vlc;
	for (int i = 0; i < lc2.getCount(); ++i)
	{
		ISpaceMarine* cur1 = lc2.getUnit(i);
		cur1->battleCry();
		cur1->rangedAttack();
		cur1->meleeAttack();
	}
	std::cout << "\n     -----FOURTH PART-----\n" << std::endl;
	Squad lc3 = lc2;
	for (int i = 0; i < lc3.getCount(); ++i)
	{
		ISpaceMarine* cur1 = lc3.getUnit(i);
		cur1->battleCry();
		cur1->rangedAttack();
		cur1->meleeAttack();
	}
	delete(vlc);
	return (0);
}
