/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 16:16:22 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/05 18:21:11 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJA_TRAP_HPP
# define NINJA_TRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class NinjaTrap: virtual public ClapTrap
{
	public:
		NinjaTrap();
		NinjaTrap(std::string const name) : ClapTrap() {
			std::cout << "NinjaTrap String Constructor called\n";
			Name = name;
			HPoint = 60;
			MHPoint = 60;
			EPoint = 120;
			MEPoint = 120;
			level = 1;
			MDmg = 60;
			RDmg = 5;
			Adr = 0;
		}
		void	ninjaShoebox(NinjaTrap &s);
		void	ninjaShoebox(ScavTrap &s);
		void	ninjaShoebox(FragTrap &s);
		~NinjaTrap();
};

#endif
