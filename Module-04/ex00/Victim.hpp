/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 19:19:00 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/07 20:08:33 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include "iostream"

class Victim
{
	private:
		std::string name;
	public:
		Victim(std::string name1);
		std::string getName() const;
		virtual void	getPolymorphed() const;
		~Victim();
};
std::ostream& operator<<(std::ostream& os, const Victim &f);
#endif
