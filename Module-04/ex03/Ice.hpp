/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 11:25:17 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/10 11:47:19 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(const Ice &I);
		Ice & operator = (const Ice &I);
		~Ice();
		AMateria *clone() const;
		void	use(ICharacter &target);
};
