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

std::string Peon::getName() const
{
	return (name);
}

void Peon::getPolymorphed() const
{
	std::cout << name << " has been turned into a pink pony!\n";
}

Peon::~Peon()
{

	std::cout << "Bleuark...\n" <<"Peon " << name << " just died for no apparent reason!\n";
}

std::ostream& operator<<(std::ostream& os, const Peon &f)
{
	os << "I'm " << f.getName() << " and I like otters!\n";
	return (os);
}

