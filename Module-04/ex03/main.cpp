/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 13:39:34 by stbaleba          #+#    #+#             */
/*   Updated: 2021/01/07 19:31:21 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	std::cout << "\n    -----FIRST TEST-----\n" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	AMateria* res;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	res = src->createMateria("cure");
	me->equip(res);
	std::cout << 0 << " Materia " << tmp->getXP() << '\n';
	std::cout << 1 << " Materia " << res->getXP() << '\n';
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << 0 << " Materia " << tmp->getXP() << '\n';
	std::cout << 1 << " Materia " << res->getXP() << '\n';
	std::cout << "\n    -----SECOND TEST-----\n" << std::endl;
	Character root("OK");
	root.equip(tmp);
	AMateria **ress = root.getInventory();
	std::cout << 0 << " Materia " << ress[0]->getXP() << '\n';
	root.use(0 ,*bob);
	std::cout << 0 << " Materia " << ress[0]->getXP() << '\n';
	Character copy1 = root;
	copy1.use(0, *bob);
	Character copy2("copy");
	copy2.equip(res);
	copy2.equip(tmp);
	copy2.use(0, *bob);
	copy2.use(1, *bob);
	copy2 = root;
	copy2.use(0, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}
