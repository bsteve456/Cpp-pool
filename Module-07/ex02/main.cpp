/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 13:13:26 by stbaleba          #+#    #+#             */
/*   Updated: 2021/01/13 17:20:05 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	std::cout << "INT ARRAY" << std::endl;
	Array<int> n;
	std::cout << "size : " << n.size() << " " << n[2] << std::endl;
	Array<int> n1((unsigned int)5);
	std::cout << "size : " << n1.size() << " " << n1[2] << std::endl;
	Array<int> n2(n1);
	std::cout << "size : " << n2.size() << " " << n2[2] << std::endl;
	n2[2] = 456;
	n2[3] = -545;
	n2[4] = 45;
	for (unsigned int i = 0; i < n2.size(); i++)
		std::cout << n2[i] << " ";
	std::cout << std::endl;
	Array<int>n3;
	n3 = n2;
	std::cout << "TEST COPY" <<std::endl;
	for (unsigned int i = 0; i < n3.size(); i++)
		std::cout << n3[i] << " ";
	std::cout << std::endl;
	std::cout << "CHAR ARRAY" << std::endl;
	Array<char> c;
	std::cout << "size : " << c.size() << " " << c[2] << std::endl;
	Array<char> c1((unsigned int)5);
	std::cout << "size : " << c1.size() << " " << c1[2] << std::endl;
	Array<char> c2(c1);
	std::cout << "size : " << c2.size() << " " << c2[2] << std::endl;
	c2[0] = 'H';
	c2[1] = 'E';
	c2[2] = 'L';
	c2[3] = 'L';
	c2[4] = 'O';
	for (unsigned int i = 0; i < c2.size(); i++)
		std::cout << c2[i] << " ";
	std::cout << std::endl;
	Array<char>c3;
	c3 = c2;
	std::cout << "TEST COPY" <<std::endl;
	for (unsigned int i = 0; i < c3.size(); i++)
		std::cout << c3[i] << " ";
	std::cout << std::endl;
}
