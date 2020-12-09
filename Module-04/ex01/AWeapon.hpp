/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 15:58:16 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/09 16:04:17 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_CPP

#include <iostream>

class AWeapon
{
	private:
		std::string Name;
		int APcost;
		int Damage;
	public:
		AWeapon(std::string & name, int apcost, int damage);
		~AWeapon();
		std::string getName() const;
		int getAPCost() const;
		int getDamage() const;
		void	attack() const = 0;
};

#endif
