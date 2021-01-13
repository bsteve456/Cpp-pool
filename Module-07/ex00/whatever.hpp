/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 11:33:12 by stbaleba          #+#    #+#             */
/*   Updated: 2021/01/13 18:10:44 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template < typename T >
void swap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

template < typename T >
T const & min (T const & x, T const & y )
{
	return ((x <= y) ? x : y);
}

template < typename T >
T const & max (T const & x, T const & y )
{
	return ((x >= y) ? x : y);
}
#endif
