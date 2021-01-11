/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   float_file.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 22:03:19 by stbaleba          #+#    #+#             */
/*   Updated: 2021/01/11 16:14:25 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int	check_fnumeric(char *s)
{
	int dot = 0;
	if (*s == '+' || *s == '-')
		s++;
	while (*s)
	{
		if (*s == '.')
			dot += 1;
		if (*s == 'f' && *(s + 1) == '\0')
			return (1);
		if (dot > 1 || (isdigit(*s) == 0 && *s != '.'))
			return (0);
		s++;
	}
	return(0);
}

int check_dot(char * scala)
{
	int count = 0;
	int res = 0;
	int zero = 0;
	int count2 = 0;
	int start = 0;

	if (scala[0] == 'n' || ft_strcmp(scala, "+inff") == 0 ||
		ft_strcmp(scala, "-inff") == 0 ||
		ft_strcmp(scala, "+inf") == 0 ||
		ft_strcmp(scala, "-inf") == 0)
		return (1);
	if (scala[0] == '+' || scala[0] == '-')
		start = 1;
	for (int i = start; i < ft_strlen(scala); i++)
	{
		if (count == 1 && scala[i] == '0')
			zero++;
		if (count == 1 && scala[i] != '0' && scala[i] != 'f')
			res = 1;
		if (scala[i] == '.')
			count++;
		count2++;
	}
	if ((res == 1 && zero < 4) || (count2 > 5 && res == 0))
		return (1);
	return (0);
}


int	check_float(char *s)
{
	char *scale = s;
	if (ft_strcmp(scale, "f") == 0)
		return (0);
	else if(ft_strcmp(scale, "nanf") == 0 ||
			ft_strcmp(scale, "+inff") == 0 ||
			ft_strcmp(scale, "-inff") == 0)
		return (1);
	if (check_fnumeric(s) != 1)
		return (0);
	return (1);
}

float	fconvert(char *s)
{
	double n = std::atof(s);
	float res = static_cast<float>(n);
	return (res);
}

void	float_to_all(float n, char * scala)
{
	char c;
	int i = 0;
	double d = 0;

	d = static_cast<double>(n);
	i = static_cast<int>(n);
	if (n < 32 && n > -128)
		std::cout << "char: non displayable" << std::endl;
	else if (n > 128 || n < -128 || ft_strcmp(scala, "nanf") == 0 || n == INFINITY || n == -INFINITY)
		std::cout << "char: impossible" << std::endl;
	else
	{
		c = static_cast<char>(n);
		std::cout << "char: " << c << std::endl;
	}
	if (ft_strcmp(scala, "nanf") == 0 || n == INFINITY || n == -INFINITY || min_max_check(n) == 0)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << i << std::endl;
	if (check_dot(scala) == 0)
	{
		std::cout << "float: " << n << ".0f" << std::endl;
		std::cout << "double: " << d << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: " << n << "f" << std::endl;
		std::cout << "double: " << d << std::endl;
	}
}
