/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 17:28:45 by stbaleba          #+#    #+#             */
/*   Updated: 2021/01/25 12:11:34 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

#include <iostream>
#include <cstdlib>


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
		ClapTrap(const ClapTrap &C);
		ClapTrap & operator = (const ClapTrap &C);
		int getHPoint(void) const;
		int getMHPoint(void) const;
		int getEPoint(void) const;
		int getMEPoint(void) const;
		int getLevel(void) const;
		std::string getName(void) const;
		int getMDmg(void) const;
		int getRDmg(void) const;
		int getAdr(void) const;
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		~ClapTrap();
};

#endif
