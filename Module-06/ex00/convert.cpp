/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 17:19:16 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/11 22:02:37 by stbaleba         ###   ########.fr       */
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
		else if (check_int(av[1]) == 1)
			int_to_all(iconvert(av[1]));
		else if (check_float(av[1]) == 1)
			float_to_all(fconvert(av[1]), scalar);
		else if (check_double(av[1]) == 1)
			double_to_all(dconvert(av[1]), scalar);
	}
	else
		std::cout << "2 arguments required" << std::endl;
}
