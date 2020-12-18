/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 16:45:03 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/02 17:34:50 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_HPP
# define ZOMBIE_HORDE_HPP

# include "Zombie.hpp"

class ZombieHorde
{
	private:
		Zombie	*Horde;
		int		n;
	public:
		ZombieHorde(int N);
		void announce();
		void delete_horde();
		~ZombieHorde();
};
std::string random_type();
std::string random_name();

#endif
