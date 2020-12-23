/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 17:45:21 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/09 17:55:19 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPER_MUTANT_HPP
# define SUPER_MUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:
		SuperMutant();
		SuperMutant(const SuperMutant &S);
		SuperMutant & operator = (const SuperMutant &S);
		~SuperMutant();
		void takeDamage(int n);
};

#endif
