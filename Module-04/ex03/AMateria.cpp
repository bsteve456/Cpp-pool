/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 10:46:00 by stbaleba          #+#    #+#             */
/*   Updated: 2021/01/07 18:25:56 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"


AMateria::AMateria()
{}

AMateria::AMateria(std::string const & type) : Type(type), _xp(0)
{}

AMateria::AMateria(const AMateria &A)
{
	*this = A;
}

std::string const & AMateria::getType() const
{
	return (this->Type);
}

unsigned int 	AMateria::getXP() const
{
	return (this->_xp);
}

void			AMateria::setXP(unsigned int XP)
{
	this->_xp = XP;
}

void	AMateria::incXP()
{
	this->_xp += 10;
}

void	AMateria::use(ICharacter & target)
{
	std::cout << "* Bad message for "  << target.getName() << " *\n";
	this->incXP();
}

AMateria & AMateria::operator = (const AMateria &A)
{
	if (this != &A)
		this->_xp = A.getXP();
	return (*this);
}

AMateria::~AMateria(){}


