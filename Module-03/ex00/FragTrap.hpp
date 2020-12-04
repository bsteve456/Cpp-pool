/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 14:03:05 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/04 15:06:04 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include <iostream>

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
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void vaulthunter_dot_exe(std::string const & target);
		~FragTrap();
};

#endif
