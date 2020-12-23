/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 19:44:56 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/07 20:12:16 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon()
{}

Peon::Peon(std::string name1) : Victim(name1), name(name1)
{
	std::cout << "Zog, zog." << std::endl;
}

Peon::Peon(const Peon &P)
{
	*this = P;
}

Peon & Peon::operator = (const Peon &P)
{
	if (this != &P)
		this->name = P.getName();
	return (*this);
}

std::string Peon::getName() const
{
	return (this->name);
}

void Peon::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a pink pony!\n";
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Peon &f)
{
	os << "I'm " << f.getName() << " and I like otters!\n";
	return (os);
}

