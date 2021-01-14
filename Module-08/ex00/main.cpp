/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 12:06:57 by stbaleba          #+#    #+#             */
/*   Updated: 2021/01/14 13:08:35 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::list <int> lst;
	std::vector <int> vect;

	for(int i = 0; i < 10; ++i)
		lst.push_back(i * 2);
	for(int j = 0; j < 10; ++j)
		vect.push_back(j * 3);

	std::cout << "         --LIST CHECK--\n" << std::endl;
	std::cout << ::easyfind(lst, 4) << std::endl;
	std::cout << ::easyfind(lst, 5) << std::endl;
	std::cout << ::easyfind(lst, 18) << std::endl;
	std::cout << ::easyfind(lst, 20) << std::endl;
	std::cout << "        --VECTOR CHECK--\n" << std::endl;
	std::cout << ::easyfind(vect, 4) << std::endl;
	std::cout << ::easyfind(vect, 5) << std::endl;
	std::cout << ::easyfind(vect, 18) << std::endl;
	std::cout << ::easyfind(vect, 20) << std::endl;

}
