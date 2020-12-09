/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 16:15:42 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/09 17:31:46 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMA_RIFLE_HPP
# define PLASMA_RIFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle() : AWeapon()
		{
			setName("PlasmaRifle");
			setAPCost(21);
			setDamage(5);
		}
		~PlasmaRifle();
		void attack() const;
}


#endif