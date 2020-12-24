/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 11:25:12 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/10 13:37:55 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

AMateria *Cure::clone() const
{
	return (new Cure(*this));
}

Cure::Cure() : AMateria("cure")
{}

Cure::Cure(const Cure &C)
{
	*this = C;
}

Cure & Cure::operator = (const Cure &C)
{
	if (this != &C)
		this->setXP(C.getXP());
	return (*this);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals "  << target.getName() << "'s wounds *\n";
	this->incXP();
}

Cure::~Cure()
{}
