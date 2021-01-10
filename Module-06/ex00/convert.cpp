/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 17:19:16 by stbaleba          #+#    #+#             */
/*   Updated: 2021/01/10 13:12:03 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"


int	ft_strlen(const char * scala)
{
	int count = 0;

	while(scala[count])
		count++;
	return (count);
}

int	ft_strcmp(const char * s1, const char * s2)
{
	int i = 0;
	int j = 0;

	while ((s1[j] || s2[j]) && i < ft_strlen(s2))
	{
		if (s1[j] != s2[j])
			return (s1[j] - s2[j]);
		j++;
		i++;
	}
	return (0);
}

int main (int ac, char **av)
{
	if (ac == 2)
	{
		char * scalar = av[1];
		if (check_char(scalar) == 1)
			char_to_all(scalar[0]);
		else if (check_int(av[1]) == 1)
			int_to_all(iconvert(av[1]), scalar);
		else if (check_float(av[1]) == 1)
			float_to_all(fconvert(av[1]), scalar);
		else if (check_double(av[1]) == 1)
			double_to_all(dconvert(av[1]), scalar);
		else
			std::cout << "Error: Arg cannot be converted." << std::endl;
	}
	else
		std::cout << "2 arguments required" << std::endl;
}
