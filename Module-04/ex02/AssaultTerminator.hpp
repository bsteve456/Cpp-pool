/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 23:42:08 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/10 00:12:00 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULT_TERMINATOR_HPP
# define ASSAULT_TERMINATOR_HPP

# include "ISpaceMarine.hpp"

class 	AssaultTerminator : public ISpaceMarine
{
	public:
		AssaultTerminator();
		AssaultTerminator(const AssaultTerminator &A);
		AssaultTerminator & operator = (const AssaultTerminator &A);
		~AssaultTerminator();
		ISpaceMarine *clone() const;
		void	battleCry() const;
		void	rangedAttack() const;
		void	meleeAttack() const;
};

#endif
