/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 16:48:53 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/09 17:42:09 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy
{
	private:
		int HP;
		std::string Type;
	public:
		Enemy()
		{
			HP = 0;
			Type = "NULL";
		}
		~Enemy(){}
		Enemy(const Enemy &E) {Type = E.getType(); HP = E.getHP();}
		std::string getType() const;
		int getHP() const;
		virtual void takeDamage(int n);
		Enemy &operator=(const Enemy &e)
		{
			HP = e.getHP();
			Type = e.getType();
			return *this;
		}
};

# endif
