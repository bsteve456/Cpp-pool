/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 13:12:24 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/10 14:59:56 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

void MateriaSource::learnMateria(AMateria *n)
{
	for(int i = 0; i < 4; i++)
	{
		if (this->Materia[i] == 0)
		{
			this->Materia[i] = n;
			break ;
		}
	}
}

MateriaSource::MateriaSource() : IMateriaSource()
{
	this->Materia = new AMateria*[4];
	for (int i = 0; i < 4; i++)
		this->Materia[i] = 0;
}

MateriaSource::MateriaSource(const MateriaSource &M)
{
	*this = M;
}

AMateria ** MateriaSource::getMateria() const
{
	return (this->Materia);
}

MateriaSource & MateriaSource::operator = (const MateriaSource &M)
{
	AMateria **mem;
	if (this != &M)
	{
		mem = M.getMateria();
		for (int i = 0; i < 4; i++)
		{
			delete(this->Materia[i]);
			this->Materia[i] = 0;
		}
		for (int i = 0; i < 4; i++)
		{
			if (mem[i] != 0)
				this->Materia[i] = mem[i]->clone();
		}
	}
	return (*this);
}

AMateria * MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (type.compare(this->Materia[i]->getType()) == 0)
		{
			return (this->Materia[i]);
		}
	}
	return (0);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		delete(this->Materia[i]);
		this->Materia[i] = 0;
	}
	delete [] this->Materia;
}
