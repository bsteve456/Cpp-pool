/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 10:46:00 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/10 11:21:48 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
	Type = type;
	_xp = 0;
}

std::string const & AMateria::getType() const
{
	return (Type);
}

unsigned int 	AMateria::getXP() const
{
	return (_xp);
}

AMateria::~AMateria(){}


