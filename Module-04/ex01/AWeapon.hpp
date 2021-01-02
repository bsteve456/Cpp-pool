/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 15:58:16 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/09 18:55:26 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

class AWeapon
{
	private:
		std::string Name;
		int APcost;
		int Damage;
	public:
		AWeapon();
		virtual ~AWeapon();
		AWeapon(const AWeapon &W);
		std::string getName() const;
		int getAPCost() const;
		int getDamage() const;
		void setName(std::string name);
		void setAPCost(int apcost);
		void setDamage(int damage);
		void virtual attack() const = 0;
		AWeapon & operator = (const AWeapon &W);
};

#endif
