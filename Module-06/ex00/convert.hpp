/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 17:19:35 by stbaleba          #+#    #+#             */
/*   Updated: 2021/01/11 16:33:39 by stbaleba         ###   ########.fr       */
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


int		check_char(char * scalar);
void	char_to_all(char c);
int		check_numeric(char *s);
int		check_int(char *scalar);
int		iconvert(char *s);
void	int_to_all(int n, char * scala);
int		isdigit(char c);
float	fconvert(char *s);
void	float_to_all(float n, char * scala);
int		check_float(char *s);
int		check_double(char *s);
double	dconvert(char *s);
void	double_to_all(double n, char * scala);
int		check_dot(char * scala);
int		min_max_check(long double n);
int		ft_strlen(const char * scala);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

# endif
