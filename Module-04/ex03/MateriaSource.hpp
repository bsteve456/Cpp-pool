/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 13:12:08 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/10 14:59:13 by stbaleba         ###   ########.fr       */
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
		MateriaSource();
		MateriaSource(const MateriaSource &M);
		MateriaSource & operator = (const MateriaSource &M);
		AMateria **getMateria() const;
		void	learnMateria(AMateria *n);
		AMateria *createMateria(std::string const & type);
		~MateriaSource();
};

#endif
