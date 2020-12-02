/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 12:26:31 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/02 13:48:35 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <iomanip>
class Pony
{
	private:
		std::string color;
		std::string height;
	public:
		void set_height(std::string ht);
		void set_color(std::string clr);
		std::string get_color();
		std::string get_height();



};
void	ponyOnTheHeap(Pony *serge);
void	ponyOnTheStack(Pony serge);
#endif
