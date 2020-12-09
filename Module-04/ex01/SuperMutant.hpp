/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 17:45:21 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/09 17:55:19 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPER_MUTANT_HPP
# define SUPER_MUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:
		SuperMutant() : Enemy()
		{
			setType("SuperMutant");
			setHP(170);
			std::cout << "Gaaah. Me want smash heads!\n";
		}
		~SuperMutant()
		{
			std::cout << "Aaargh...\n";
		}
		void takeDamage(int n);
};

#endif
