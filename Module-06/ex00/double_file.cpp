/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_file.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 22:03:19 by stbaleba          #+#    #+#             */
/*   Updated: 2021/01/11 16:39:44 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int	check_double(char *s)
{
	char * scale = s;
	if(ft_strncmp(scale, "nan", ft_strlen(scale)) == 0 ||
		ft_strncmp(scale, "+inf", ft_strlen(scale)) == 0 ||
		ft_strncmp(scale, "-inf", ft_strlen(scale)) == 0)
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

void	double_to_all(double n, char * scala)
{
	char c;
	int i = 0;
	float f = 0;

	f = static_cast<float>(n);
	i = static_cast<int>(n);
	if (n < 32 && n > -128)
		std::cout << "char: non displayable" << std::endl;
	else if (n > 128 || n < -128 || ft_strncmp(scala, "nan", ft_strlen(scala)) == 0 || n == INFINITY || n == -INFINITY)
		std::cout << "char: impossible" << std::endl;
	else
	{
		c = static_cast<char>(n);
		std::cout << "char: " << "'" << c << "'" << std::endl;
	}
	if (ft_strncmp(scala, "nan", ft_strlen(scala)) == 0 || n == INFINITY || n == -INFINITY || min_max_check(n) == 0)
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
