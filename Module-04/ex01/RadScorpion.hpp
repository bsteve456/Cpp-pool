/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 17:45:21 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/09 18:05:26 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAD_SCORPION_HPP
# define RAD_SCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:
		RadScorpion();
		RadScorpion(const RadScorpion &R);
		RadScorpion & operator = (const RadScorpion &R);
		~RadScorpion();
};

#endif
