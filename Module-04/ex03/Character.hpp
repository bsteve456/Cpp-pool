/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 12:08:26 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/10 13:57:35 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter
{
		private:
			AMateria **inventory;
			std::string Name;
			Character();
		public:
			Character(std::string name);
			~Character();
			Character(const Character &C);
			std::string const & getName() const;
			void equip(AMateria *m);
			void unequip(int idx);
			void use(int idx, ICharacter &target);
			AMateria **getInventory() const;
			Character &operator=(const Character &C);
};

#endif
