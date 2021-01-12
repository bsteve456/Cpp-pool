/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 11:58:22 by stbaleba          #+#    #+#             */
/*   Updated: 2021/01/12 12:05:44 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include "iostream"

template < typename T >
void iter(T *arr, size_t length, void(*f)(T))
{
	for(size_t i = 0; i < length; i++)
		f(arr[i]);
}

template <typename T >
void print(T a)
{
	std::cout << a << std::endl;
}

#endif
