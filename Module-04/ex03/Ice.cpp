/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 11:25:12 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/10 13:38:16 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

AMateria *Ice::clone() const
{
	return (new Ice(*this));
}

Ice::Ice() : AMateria("ice")
{}

Ice::Ice(const Ice &I)
{
	*this = I;
}

Ice & Ice::operator = (const Ice &I)
{
	if (this != &I)
		this->setXP(I.getXP());
	return (*this);
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at "  << target.getName() << " *\n";
	this->incXP();
}

Ice::~Ice()
{}
