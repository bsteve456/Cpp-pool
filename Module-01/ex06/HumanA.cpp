/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 11:23:40 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/03 12:06:43 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name1, Weapon &wep) : name(name1), weapon(wep)
{}

void	HumanA::attack()
{
	std::cout << name << " attacks with his " << weapon.getType() << '\n';
}
