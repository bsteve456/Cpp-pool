/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 19:02:24 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/07 20:06:54 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

#include "iostream"
#include "Victim.hpp"

class Sorcerer
{
	private:
		std::string name;
		std::string title;
		Sorcerer();
	public:
		Sorcerer(std::string name1, std::string title1);
		Sorcerer(const Sorcerer &S);
		Sorcerer & operator = (const Sorcerer &S);
		std::string getName() const;
		std::string getTitle() const;
		void	polymorph(Victim const &a) const;
		virtual ~Sorcerer();
};
std::ostream& operator<<(std::ostream& os, const Sorcerer &f);
#endif
