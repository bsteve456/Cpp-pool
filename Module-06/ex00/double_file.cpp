/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_file.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 22:03:19 by stbaleba          #+#    #+#             */
/*   Updated: 2021/01/02 19:11:35 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int	check_double(char *s)
{
	std::string scale = std::string(s);
	if(scale.compare("nan") == 0 ||
		scale.compare("+inf") == 0 ||
		scale.compare("-inf") == 0)
		return (1);
	if (check_numeric(s) == 0)
		return (0);
	return (1);
}

double	dconvert(char *s)
{
	double n = std::atof(s);
	return (n);
}

void	double_to_all(double n, std::string scala)
{
	char c;
	int i = 0;
	float f = 0;

	f = static_cast<float>(n);
	i = static_cast<int>(n);
	if (n < 32 && n > -128)
		std::cout << "char: non displayable" << std::endl;
	else if (n > 128 || n < -128 || scala.compare("nan") == 0 || n == INFINITY || n == -INFINITY)
		std::cout << "char: impossible" << std::endl;
	else
	{
		c = static_cast<char>(n);
		std::cout << "char: " << c << std::endl;
	}
	if (scala.compare("nan") == 0 || n == INFINITY || n == -INFINITY || min_max_check(n) == 0)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << i << std::endl;
	if (check_dot(scala) == 0)
	{
		std::cout << "float: " << f << ".0f" << std::endl;
		std::cout << "double: " << n << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: " << f << "f" << std::endl;
		std::cout << "double: " << n << std::endl;
	}
}
