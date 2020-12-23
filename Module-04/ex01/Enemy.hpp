/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 16:48:53 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/09 19:05:34 by stbaleba         ###   ########.fr       */
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
		Enemy();
		virtual ~Enemy();
		Enemy(const Enemy &E);
		std::string getType() const;
		int getHP() const;
		void setType(std::string Type);
		void setHP(int HP);
		virtual void takeDamage(int n);
		Enemy & operator = (const Enemy &E);
};

# endif
