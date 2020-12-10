/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 13:39:34 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/10 14:52:54 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
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
	delete bob;
	delete me;
	delete src;

	return 0;
}
