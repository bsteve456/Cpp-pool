/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 17:19:16 by stbaleba          #+#    #+#             */
/*   Updated: 2021/01/11 16:32:58 by stbaleba         ###   ########.fr       */
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

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (0);
	while ((*s1 || *s2) && i < n)
	{
		if ((unsigned char)*s1 != (unsigned char)*s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
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
