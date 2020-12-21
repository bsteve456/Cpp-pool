/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 11:23:23 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/03 12:06:49 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"
class HumanA
{
	private:
		std::string name;
		Weapon &weapon;
	public:
		HumanA(std::string name1, Weapon &wep);
		void	attack();
		~HumanA();
};

#endif
