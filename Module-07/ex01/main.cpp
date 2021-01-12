/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 11:29:35 by stbaleba          #+#    #+#             */
/*   Updated: 2021/01/12 12:12:11 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main( void ) {
	int a[5] = {45, 7, -8, 9, 0};
	char str[6] = "abcde";
	float f[5] = {45.45, 7.05, -8.984, 9.78, 0.7};

	std::cout << "int array\n" << std::endl;
	iter(a, 5, &(::print));
	std::cout << "\nchar array\n" << std::endl;
	iter(str, 6, &(::print));
	std::cout << "\nfloat array\n" << std::endl;
	iter(f, 5, &(::print));

	return 0;
}
