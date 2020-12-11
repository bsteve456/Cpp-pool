/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_file.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 19:04:51 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/11 20:45:30 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int	check_numeric(char *s)
{
	int dot = 0;
	if (*s == '+' || *s == '-')
		s++;
	while (*s)
	{
		if (*s == '.')
			dot += 1;
		if (dot > 1 || (std::isdigit(*s) == 0 && *s != '.'))
			return (0);
		s++;
	}
	if (dot == 1)
		return (2);
	return (1);
}

int	iconvert(char *s)
{
	double n = std::atof(s);
	int res = n;
	return (res);
}

int	check_int(char *scalar)
{
	if (check_numeric(scalar) != 1)
		return (0);
	long double n = std::atof(scalar);
	if (n > INT_MAX || n < INT_MIN)
		return (0);
	return (1);
}

void	int_to_all(int n)
{
	char c;
	float f = n;
	double d = n;


	if (n < 32)
		std::cout << "char: non displayable" << std::endl;
	else if (n > 128)
		std::cout << "char: impossible" << std::endl;
	else
	{
		c = n;
		std::cout << "char: " << c << std::endl;
	}
	std::cout << "int: " << n << std::endl;
	std::cout << std::setprecision(1) << std::fixed;
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}
