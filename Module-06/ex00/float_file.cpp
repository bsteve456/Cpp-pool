/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   float_file.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 22:03:19 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/11 22:33:51 by stbaleba         ###   ########.fr       */
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
int	check_float(char *s)
{
	std::string scale = std::string(s);
	if (scale.compare("f") == 0)
		return (0);
	else if(scale.compare("nanf") == 0 ||
		scale.compare("+inff") == 0 ||
		scale.compare("-inff") == 0)
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

void	float_to_all(float n, std::string scala)
{
	char c;
	int i = 0;
	double d = 0;

	d = static_cast<double>(n);
	i = static_cast<int>(n);
	if (n < 32 && n > -128)
		std::cout << "char: non displayable" << std::endl;
	else if (n > 128 || scala.compare("nanf") == 0 || n == INFINITY || n == -INFINITY)
		std::cout << "char: impossible" << std::endl;
	else
	{
		c = static_cast<char>(n);
		std::cout << "char: " << c << std::endl;
	}
	if (scala.compare("nanf") == 0 || n == INFINITY || n == -INFINITY)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << i << std::endl;
	std::cout << "float: " << n << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}
