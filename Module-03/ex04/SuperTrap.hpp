/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 17:20:09 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/05 18:10:10 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPER_TRAP_HPP
# define SUPER_TRAP_HPP

# include "ClapTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap: public NinjaTrap, public FragTrap
{
	public:
		SuperTrap();
		SuperTrap(std::string const name) : NinjaTrap(name), FragTrap(name){
			std::cout << "SuperTrap String Constructor called\n";
			Name = name;
			HPoint = FragTrap::HPoint;
			MHPoint = FragTrap::MHPoint;
			EPoint = NinjaTrap::EPoint;
			MEPoint = NinjaTrap::MEPoint;
			level = 1;
			MDmg = NinjaTrap::MDmg;
			RDmg = FragTrap::RDmg;
			Adr = FragTrap::Adr;
		}
		~SuperTrap();
};

#endif
