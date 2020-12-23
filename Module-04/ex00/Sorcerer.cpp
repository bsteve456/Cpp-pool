/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 19:09:22 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/07 20:11:38 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{}

Sorcerer::Sorcerer(std::string name1, std::string title1)
{
	this->name = name1;
	this->title = title1;
	std::cout << this->name << ", " << this->title << ", is born!\n";
}

Sorcerer::Sorcerer(const Sorcerer &S)
{
	*this = S;
}

Sorcerer & Sorcerer::operator = (const Sorcerer &S)
{
	if (this != &S)
	{
		this->name = S.getName();
		this->title = S.getTitle();
	}
	return (*this);
}

std::string Sorcerer::getName() const
{
	return (this->name);
}

std::string Sorcerer::getTitle() const
{
	return (this->title);
}

void Sorcerer::polymorph(Victim const &a) const
{
	a.getPolymorphed();
}

Sorcerer::~Sorcerer()
{
	std::cout << this->name << ", " << this->title << ", is dead. Consequences will never be the same!\n";
}

std::ostream& operator<<(std::ostream& os, const Sorcerer &f)
{
	os << "I am " << f.getName() << ", " << f.getTitle() << ", and I like ponies!\n";
	return os;
}
