/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 21:55:52 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/10 00:14:33 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include "ISquad.hpp"

struct squade
{
	ISpaceMarine *marine;
	struct squade *next;
};

squade	*new_member(ISpaceMarine *new1);
void	add_member(squade **lst, squade *new1);

class Squad : public virtual ISquad
{
	private:
		squade *squad;
	public:
		Squad();
		~Squad();
		Squad(const ISquad &S);
		squade			*getSquade() const;
		int				getCount() const;
		ISpaceMarine	*getUnit(int n) const;
		int				push(ISpaceMarine *member);
		Squad & operator = (const ISquad &S);
};
#endif
