/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 12:08:26 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/10 12:32:59 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"

class Character : public ICharacter
{
		private:
			AMateria **inventory;
			std::string Name;
		public:
			Character(std::string name) : ICharacter()
			{
				Name = name;
				inventory = new AMateria*[4];
				for(int i = 0; i < 4; i++)
					inventory[i] = 0;
			}
			~Character();
			Character(const Character &c)
			{
				AMateria **test;
				test = c.getInventory();
				for(int i = 0; i < 4; i++)
				{
					delete(test[i]);
					test[i] = 0;
				}
				inventory = test;
			}
			std::string const & getName() const;
			void equip(AMateria *m);
			void unequip(int idx);
			void use(int idx, ICharacter &target);
}

#endif
