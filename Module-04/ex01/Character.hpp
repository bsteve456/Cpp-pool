/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 18:09:37 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/09 18:47:52 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	private:
		std::string Name;
		AWeapon *weapon;
		int AP;
	public:
		Character(string const & name)
		{
			Name = name;
			AP = 40;
			weapon = 0;
		}
		~Character()
		{
			delete(weapon);
		}
		Character(const Character &C) { Name = C.getName(); AP = C.getAP(); weapon = equip(C.getWeapon());}
		void recoverAP();
		void equip(AWeapon *wep);
		void attack(Enemy *enemy);
		std::string getName() const;
		int getAP() const;
		AWeapon *getWeapon();
		Character &operator=(const Character &c)
		{
			Name = c.getName();
			AP = c.getAP();
			weapon = equip(c.getWeapon());
			return *this;
		}
};
std::ostream& operator<<(std::ostream& os, const Character &c);

#endif
