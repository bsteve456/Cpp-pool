/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 11:25:17 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/10 11:50:46 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure &C);
		Cure & operator = (const Cure &C);
		~Cure();
		AMateria *clone() const;
		void	use(ICharacter &target);
};
