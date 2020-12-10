/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 13:12:24 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/10 13:32:44 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

void MateriaSource::learnMateria(AMateria *n)
{
	for(int i = 0; i < 4; i++)
	{
		if (Materia[i] == 0)
		{
			Materia[i] = n;
			break ;
		}
	}
}

AMateria * MateriaSource::createMateria(std::string const & type)
{
	for(int i; i < 4; i++)
	{
		if (type.compare(Materia[i]->getType()) == 0)
			return (Materia[i]);
	}
	return (0);
}
