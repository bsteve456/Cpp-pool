/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 16:15:42 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/09 16:27:45 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWER_FIST_HPP
# define POWER_FIST_HPP

# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
		PowerFist(std::string const & name, int apcost, int damage) : AWeapon(name, apcost, damage)
		{}
		~PowerFist();
		void attack() const;
}


#endif
