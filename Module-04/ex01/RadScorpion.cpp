/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 17:45:43 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/09 18:05:09 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy()
{
	this->setType("RadScorpion");
	this->setHP(80);
	std::cout << "* click click click *\n";
}

RadScorpion::RadScorpion(const RadScorpion &R)
{
	*this = R;
}

RadScorpion & RadScorpion::operator = (const RadScorpion &R)
{
	if (this != &R)
	{
		this->setType(getType());
		this->setHP(getHP());
	}
	return (*this);
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *\n";
}
