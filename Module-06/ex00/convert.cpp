/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 17:19:16 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/11 17:49:51 by stbaleba         ###   ########.fr       */
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
	}
	else
		std::cout << "Too much argument." << std::endl;
}
