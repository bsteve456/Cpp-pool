/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 14:03:05 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/04 18:04:30 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string const name) : ClapTrap(name){
	std::cerr << "ScavTrap String Constructor called\n";
	Name = name;
	HPoint = 100;
	MHPoint = 100;
	EPoint = 50;
	MEPoint = 50;
	level = 1;
	MDmg = 20;
	RDmg = 15;
	Adr = 3;
}
		void challengeNewcomer(int nb_challenge);
		~ScavTrap();
};

#endif
