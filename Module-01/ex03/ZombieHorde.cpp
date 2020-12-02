/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 16:48:32 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/02 17:34:19 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
	Horde = new Zombie[N];
	n = N;
	for (int i = 0; i < N; i++)
	{
		Horde[i].set_type(random_type());
		Horde[i].set_name(random_name());
	}
}

void ZombieHorde::delete_horde()
{
	delete [] Horde;
}

void	ZombieHorde::announce()
{
	for (int i = 0; i < n; i++)
		Horde[i].announce();
}
