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
# include "ISpaceMarine.hpp"

struct squade
{
	ISpaceMarine *marine;
	struct squade *next;
};

squade	*new_member(ISpaceMarine *new1);
void	add_member(squade **lst, squade *new1);

class Squad : public ISquad
{
	private:
		squade *squad;
	public:
		Squad() : ISquad()
		{
			squad = 0;
		}
		~Squad();
		Squad(const Squad &s)
		{
			squade *d;
			d = s.getSquade();
			if (d == 0)
				squad = 0;
			else
			{
				while(d->next)
				{
					add_member(&squad, d);
					d = d->next;
				}
			}
		}
		squade			*getSquade() const;
		int				getCount() const;
		ISpaceMarine	*getUnit(int n) const;
		int				push(ISpaceMarine *member);
		Squad &operator=(const Squad &S)
		{
			squade *clean;
			squade *mem;
			clean = S.getSquade();
			if (clean != 0)
			{
				while(clean)
				{
					mem = clean->next;
					delete(clean->marine);
					delete(clean);
					clean = mem;
				}
			}
			squad = S.getSquade();
			return (*this);
		}
};
#endif
