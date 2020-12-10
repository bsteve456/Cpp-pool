/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 10:45:40 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/10 13:37:14 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

# include <iostream>

class AMateria
{
	private:
		std::string Type;
		unsigned int _xp;
	public:
		AMateria(std::string const & type);
		~AMateria();
		std::string const & getType() const;
		unsigned int getXP() const;
		void	incXP();
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter & target);
		AMateria & operator = (const AMateria &a)
		{
			_xp = a.getXP();
			return (*this);
		}
};

#endif
