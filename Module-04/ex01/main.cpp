

/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 18:48:39 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/09 20:03:17 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

int main()
{
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->recoverAP();
	std::cout << *me;
	Enemy* c = new SuperMutant();
	me->attack(c);
	std::cout << *me;
	me->attack(c);
	std::cout << *me;
	me->attack(c);
	std::cout << *me;
	me->attack(c);
	std::cout << *me;
	me->attack(c);
	std::cout << *me;
	me->attack(c);
	std::cout << *me;
	Enemy* d = new RadScorpion();
	me->attack(c);
	std::cout << *me;
	me->attack(d);
	std::cout << *me;
	me->attack(d);
	std::cout << *me;
	me->recoverAP();
	me->attack(c);
	std::cout << *me;
	me->attack(c);
	std::cout << *me;
	delete me;
	delete d;
	delete c;
	return (0);
}
