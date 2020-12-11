/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 17:19:35 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/11 20:27:17 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <iomanip>
# include <limits.h>
# include <float.h>
# include <cstdlib>


int		check_char(std::string scalar);
void	char_to_all(char c);
int		check_numeric(char *s);
int		check_int(char *scalar);
int		iconvert(char *s);
void	int_to_all(int n);

# endif
