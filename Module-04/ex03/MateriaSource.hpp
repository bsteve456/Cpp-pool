/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 13:12:08 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/10 13:26:14 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIAL_SOURCE_HPP
# define MATERIAL_SOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria **Materia;
	public:
		MateriaSource() : IMateriaSource()
		{
			Materia = new AMateria*[4];
			for (int i = 0; i < 4; i++)
				AMateria[i] = 0;

		}
		void	learnMateria(AMateria *n);
		AMateria *createMateria(std::string const & type);
		~MateriaSource()
		{
			for(int i = 0; i < 4; i++)
				delete(Materia[i]);
			delete(Materia[i]);
		}
};

#endif
