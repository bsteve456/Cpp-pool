/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 14:27:29 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/02 16:58:48 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
class Zombie
{
	private:
		std::string type;
		std::string name;
	public:
		void	set_type(std::string tp);
		void	set_name(std::string nm);
		std::string	get_name();
		std::string	get_type();
		void	announce();
};
std::string random_type();
std::string random_name();

#endif
