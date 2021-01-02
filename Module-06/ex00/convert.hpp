/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 17:19:35 by stbaleba          #+#    #+#             */
/*   Updated: 2021/01/02 18:58:45 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <iomanip>
# include <limits.h>
# include <float.h>
# include <cstdlib>
# include <cmath>


int		check_char(std::string scalar);
void	char_to_all(char c);
int		check_numeric(char *s);
int		check_int(char *scalar);
int		iconvert(char *s);
void	int_to_all(int n);
int		isdigit(char c);
float	fconvert(char *s);
void	float_to_all(float n, std::string scala);
int		check_float(char *s);
int		check_double(char *s);
double	dconvert(char *s);
void	double_to_all(double n, std::string scala);
int		check_dot(std::string scala);
int		min_max_check(long double n);

# endif
