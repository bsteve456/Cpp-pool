/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 11:34:11 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/03 11:43:18 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name1)
{
	name = name1;
}

void	HumanB::setWeapon(Weapon web)
{
	weapon = &web;
}

void	HumanB::attack()
{
	cout << name << " attacks with his " << (*weapon).getType() << '\n';
}
