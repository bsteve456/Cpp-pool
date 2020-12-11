/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_file.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 17:33:00 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/11 20:39:33 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int		check_char(std::string scalar)
{
	char c;
	if (scalar.length() != 1)
		return (0);
	c = (char)scalar[0];
	if (c < 32 || (c > 47 && c < 58))
		return (0);
	return (1);
}

void	char_to_all(char c)
{
	int i;
	float f;
	double d;

	std::cout << std::setprecision(1) << std::fixed;
	std::cout << "char : " << c << std::endl;
	i = (int)c;
	std::cout << "int : " << i << std::endl;
	f = (float)(c);
	std::cout << "float : " << f << "f" << std::endl;
	d = (double)(c);
	std::cout << "double : " << d << std::endl;
}
