/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 11:49:50 by stbaleba          #+#    #+#             */
/*   Updated: 2021/01/14 13:04:16 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <list>
# include <vector>
# include <iterator>

template < typename T >
int	easyfind(T & g, int o)
{
	typedef typename T::iterator it;
	for (it p = g.begin(); p != g.end(); ++p)
	{
		if(*p == o)
			return (1);
	}
	return (-1);
}

#endif
