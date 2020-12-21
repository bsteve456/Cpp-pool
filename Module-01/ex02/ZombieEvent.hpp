/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 14:44:09 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/02 15:49:26 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP

# include "Zombie.hpp"

class ZombieEvent
{
	private:
		std::string mem;
	public:
		void		setZombieType(std::string mem_type);
		std::string	getZombieType();
		Zombie*		newZombie(std::string name);
		~ZombieEvent();
};
std::string	random_type();
std::string	random_name();
void		randomChump();


#endif
