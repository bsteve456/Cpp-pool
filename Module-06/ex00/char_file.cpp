/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_file.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 17:33:00 by stbaleba          #+#    #+#             */
/*   Updated: 2021/01/02 19:49:58 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int		check_char(std::string scalar)
{
	char c;
	if (scalar.length() != 1)
		return (0);
	c = static_cast<char>(scalar[0]);
	if (c < 32 || (c > 47 && c < 58))
		return (0);
	return (1);
}

void	char_to_all(char c)
{
	int i;
	float f;
	double d;

	std::cout << "char : " << c << std::endl;
	i = static_cast<int>(c);
	std::cout << "int : " << i << std::endl;
	f = static_cast<float>(c);
	std::cout << "float : " << f << ".0f" << std::endl;
	d = static_cast<double>(c);
	std::cout << "double : " << d << ".0" << std::endl;
}
