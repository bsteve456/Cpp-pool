/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 17:45:43 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/09 17:59:27 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

void SuperMutant::takeDamage(int n)
{
	int hp = getHP();
	int result = hp - (n - 3);
	if(result <= 0)
		hp = 0;
	else
		setHP(result);
}
