/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 17:28:45 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/05 16:51:43 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

#include <iostream>

class ClapTrap
{
	public:
		int HPoint;
		int MHPoint;
		int EPoint;
		int MEPoint;
		int level;
		std::string Name;
		int MDmg;
		int RDmg;
		int Adr;
		ClapTrap();
		ClapTrap(std::string const name);
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		~ClapTrap();
};

#endif