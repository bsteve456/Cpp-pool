/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_file.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 17:33:00 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/11 18:40:00 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int		check_char(std::string scalar)
{
	char c;
	if (scalar.length() != 1)
		return (0);
	c = (char)scalar[0];
	if (c < 32)
		return (0);
	return (1);
}

void	char_to_all(char c)
{
	int i;
	float f;
	double d;

	std::cout << "char : " << c << std::endl;
	i = (int)c;
	std::cout << "int : " << i << std::endl;
	f = (float)(c);
	if (std::fmod(f, 1.0f) == 0)
		std::cout << "float : " << f << ".0f" << std::endl;
	else
		std::cout << "float : " << f << "f" << std::endl;
	d = (double)(c);
	if (std::fmod(d, 1.0) == 0)
		std::cout << "double : " << d << ".0" << std::endl;
	else
		std::cout << "double : " << d << std::endl;
}
