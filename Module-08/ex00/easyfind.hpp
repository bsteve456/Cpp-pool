/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 11:49:50 by stbaleba          #+#    #+#             */
/*   Updated: 2021/01/16 17:47:37 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <list>
# include <vector>
# include <iterator>
# include <algorithm>

template < typename T >
int	easyfind(T & g, int o)
{
	typedef typename T::iterator it;
	it p = find(g.begin(), g.end(), o);

	if (p != g.end())
		return (1);
	return (-1);
}

#endif
