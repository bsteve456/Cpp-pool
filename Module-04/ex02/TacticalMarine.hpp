/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 23:42:08 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/10 00:20:53 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICAL_MARINE_HPP
# define TACTICAL_MARINE_HPP

# include "ISpaceMarine.hpp"

class 	TacticalMarine : public ISpaceMarine
{
	public:
		TacticalMarine();
		TacticalMarine(const TacticalMarine &T);
		TacticalMarine & operator = (const TacticalMarine &T);
		~TacticalMarine();
		ISpaceMarine *clone() const;
		void	battleCry() const;
		void	rangedAttack() const;
		void	meleeAttack() const;
};

#endif
