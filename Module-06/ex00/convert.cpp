/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 17:19:16 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/11 20:03:57 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int main (int ac, char **av)
{
	if (ac == 2)
	{
		std::string scalar = std::string(av[1]);
		if (check_char(scalar) == 1)
			char_to_all((char)scalar[0]);
		else if(check_int(av[1]) == 1)
			int_to_all(iconvert(av[1]));
	}
	else
		std::cout << "Too much argument." << std::endl;
}
