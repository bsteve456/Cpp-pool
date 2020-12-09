/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 23:42:08 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/10 00:00:14 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICAL_MARINE_HPP
# define TACTICAL_MARINE_HPP

# include "ISpaceMarine.hpp"

class 	TacticalMarine : public ISpaceMarine
{
	public:
		TacticalMarine() : ISpaceMarine()
		{
			std::cout << "Tactical Marine ready for battle\n";
		}
		~TacticalMarine()
		{
			std::cout << "Aaargh...\n";
		}
		ISpaceMarine *clone();
		void	battleCry() const;
		void	rangedAttack() const;
		void	meleeAttack() const;


};

#endif
