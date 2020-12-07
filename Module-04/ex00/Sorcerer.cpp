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

Sorcerer::Sorcerer(std::string name1, std::string title1)
{
	name = name1;
	title = title1;
	std::cout << name << ", " << title << ", is born!\n";
}

std::string Sorcerer::getName() const
{
	return (name);
}

std::string Sorcerer::getTitle() const
{
	return (title);
}

void Sorcerer::polymorph(Victim const &a) const
{
	a.getPolymorphed();
}

Sorcerer::~Sorcerer()
{
	std::cout << name << ", " << title << ", is dead. Consequences will never be the same!\n";
}

std::ostream& operator<<(std::ostream& os, const Sorcerer &f)
{
	os << "I am " << f.getName() << ", " << f.getTitle() << ", and I like ponies!\n";
	return os;
}
