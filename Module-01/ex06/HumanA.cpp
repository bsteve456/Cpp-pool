/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 11:23:40 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/03 11:33:34 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name1, Weapon wep)
{
	&weapon = wep;
	name = name1;
}

void	HumanA::attack()
{
	cout << name << " attacks with his " << weapon.getType() << '\n';
}
