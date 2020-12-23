/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 22:19:41 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/10 00:19:35 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() : ISquad(), squad(0)
{}

Squad::Squad(const Squad &S)
{
	*this = S;
}

Squad & Squad::operator = (const Squad &S)
{
	if (this != &S)
	{
		squade *clean;
		squade *mem;
		clean = this->getSquade();
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
		this->squad = S.getSquade();
	}
	return *this;
}

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
		*lst = new1;
	else
	{
		while(list->next)
			list = list->next;
		list->next = new1;
	}
}

squade * Squad::getSquade() const
{
	return (this->squad);
}

int Squad::getCount() const
{
	int count = 0;
	squade *lst;

	lst = this->squad;
	if(this->squad == 0)
		return (0);
	while(lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}

ISpaceMarine * Squad::getUnit(int i) const
{
	int j = 0;
	squade *lst;

	lst = this->squad;
	if(squad == 0)
		return (0);
	while(lst->next && j < i)
	{
		lst = lst->next;
		j++;
	}
	if (i == j)
		return (lst->marine);
	return (0);
}

int Squad::push(ISpaceMarine *member)
{
	add_member(&(this->squad), new_member(member));
	return (getCount());
}

Squad::~Squad()
{
	squade *mem;

	if(this->squad != 0)
	{
		while (this->squad)
		{
			mem = this->squad->next;
			delete(this->squad->marine);
			delete(this->squad);
			this->squad = mem;
		}
	}
}
