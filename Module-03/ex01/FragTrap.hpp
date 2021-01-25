/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 14:03:05 by stbaleba          #+#    #+#             */
/*   Updated: 2021/01/25 12:09:43 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include <iostream>
# include <cstdlib>



class FragTrap
{
	private:
		int HPoint;
		int MHPoint;
		int EPoint;
		int MEPoint;
		int level;
		std::string Name;
		int MDmg;
		int RDmg;
		int Adr;
	public:
		FragTrap();
		FragTrap(std::string const name);
		FragTrap(const FragTrap &F);
		FragTrap& operator = (const FragTrap &F);
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
		void vaulthunter_dot_exe(std::string const & target);
		~FragTrap();
};

#endif
