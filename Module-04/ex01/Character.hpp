/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 18:09:37 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/09 19:00:49 by stbaleba         ###   ########.fr       */
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
		Character();
		Character(std::string const & name);
		~Character();
		Character(const Character &C);
		void recoverAP();
		void equip(AWeapon *wep);
		void attack(Enemy *enemy);
		std::string getName() const;
		int getAP() const;
		AWeapon *getWeapon() const;
		Character & operator = (const Character &C);
};
std::ostream& operator<<(std::ostream& os, const Character &c);

#endif
