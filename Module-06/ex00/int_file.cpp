/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_file.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 19:04:51 by stbaleba          #+#    #+#             */
/*   Updated: 2021/01/02 19:10:44 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int	isdigit(char c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}

int	check_numeric(char *s)
{
	int dot = 0;
	if (*s == '+' || *s == '-')
		s++;
	while (*s)
	{
		if (*s == '.')
			dot += 1;
		if (dot > 1 || (isdigit(*s) == 0 && *s != '.'))
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
	int res = static_cast<int>(n);
	return (res);
}

int min_max_check(long double n)
{
	if (n > INT_MAX || n < INT_MIN)
		return (0);
	return (1);
}

int	check_int(char *scalar)
{
	if (check_numeric(scalar) != 1)
		return (0);
	long double n = std::atof(scalar);
	if(min_max_check(n) == 0)
		return (0);
	return (1);
}

void	int_to_all(int n)
{
	char c;
	float f = 0;
	double d = 0;
	d = static_cast<double>(n);
	f = static_cast<float>(n);
	if (n < 32 && n > -128)
		std::cout << "char: non displayable" << std::endl;
	else if (n > 128 || n < -128)
		std::cout << "char: impossible" << std::endl;
	else
	{
		c = static_cast<char>(n);
		std::cout << "char: " << c << std::endl;
	}
	std::cout << "int: " << n << std::endl;
	std::cout << "float: " << f << ".0f" << std::endl;
	std::cout << "double: " << d << ".0" << std::endl;
}
