/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 16:16:22 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/05 16:42:28 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJA_TRAP_HPP
# define NINJA_TRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class NinjaTrap: public ClapTrap
{
	public:
		NinjaTrap();
		NinjaTrap(std::string const name);
		void	ninjaShoebox(NinjaTrap &s);
		void	ninjaShoebox(ScavTrap &s);
		void	ninjaShoebox(FragTrap &s);
		~NinjaTrap();
};

#endif
