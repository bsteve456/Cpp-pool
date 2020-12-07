/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 19:19:49 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/07 20:09:23 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name1)
{
	name = name1;
	std::cout << "Some random victim called " << name << " just appeared!\n";
}

std::string Victim::getName() const
{
	return (name);
}

void Victim::getPolymorphed() const
{
	std::cout << name << " has been turned into a cute little sheep!\n";
}

Victim::~Victim()
{
	std::cout << "Victim " << name << " just died for no apparent reason!\n";
}

std::ostream& operator<<(std::ostream& os, const Victim &f)
{
	os << "I'm " << f.getName() << " and I like otters!\n";
	return (os);
}

