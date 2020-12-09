/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 22:19:41 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/09 23:21:40 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

squade *new_member(ISpaceMarine *new1)
{
	squade *new2 = new squade;
	new2->next = 0;
	new2->marine = new1;
	return (new2);
}

void	add_member(squade **lst, squade *new1)
{
	squade *list;

	list = *lst;
	if (!list)
		lst = new1;
	else
	{
		while(list->next)
			list = list-next;
		list->next = new1;
	}
}

squade * Squad::getSquade() const
{
	return (squad);
}

int Squad::getCount() const
{
	int count = 0;
	if(squad == 0)
		return (0);
	while(squad)
	{
		squad = squad->next;
		count++;
	}
	return (count);
}

ISpaceMarine * Squad::getUnit(int i) const
{
	int j = 0;

	if(squad == 0)
		return (0);
	while(squad->next && j < i)
	{
		squad = squad->next;
		j++;
	}
	if (i == j)
		return (squad->marine);
	return (0);
}

int Squad::push(ISpaceMarine *member)
{
	add_member(&squad, new_member(member));
	return (getCount());
}
Squad::~Squad()
{
	squade *mem;

	if(squad != 0)
	{
		while (squad)
		{
			mem = squad->next;
			delete(squad->marine);
			delete(squad);
			squad = mem;
		}
	}
}
