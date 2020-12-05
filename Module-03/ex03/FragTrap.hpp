/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 14:03:05 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/05 16:20:05 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include <iostream>
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string const name) : ClapTrap(name){
			std::cout << "FragTrap String Constructor called\n";
			Name = name;
			HPoint = 100;
			MHPoint = 100;
			EPoint = 100;
			MEPoint = 100;
			level = 1;
			MDmg = 30;
			RDmg = 20;
			Adr = 5;
		}
		void vaulthunter_dot_exe(std::string const & target);
		~FragTrap();
};

#endif
