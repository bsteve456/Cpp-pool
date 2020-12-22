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
		SuperTrap(std::string const name);
		SuperTrap(const SuperTrap &S);
		SuperTrap& operator = (const SuperTrap &S);

		~SuperTrap();
};

#endif
