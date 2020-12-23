/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 19:44:37 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/07 20:08:50 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

#include "Victim.hpp"

class Peon: public Victim
{
	private:
		std::string name;
		Peon();
	public:
		Peon(std::string name1);
		Peon(const Peon &P);
		Peon & operator = (const Peon &P);
		std::string getName() const;
		void	getPolymorphed() const;
		~Peon();
};
std::ostream& operator<<(std::ostream& os, const Peon &f);
#endif
