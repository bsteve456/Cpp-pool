/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 11:12:12 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/03 11:53:13 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type1)
{
	type = type1;
}

const std::string	Weapon::getType()
{
	const std::string tp = type;
	return (tp);
}

void Weapon::setType(std::string type1)
{
	type = type1;
}

Weapon::~Weapon()
{}
