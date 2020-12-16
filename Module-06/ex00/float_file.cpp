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
	if (check_fnumeric(s) != 1 && scale.compare(""))
		return (0);
}
