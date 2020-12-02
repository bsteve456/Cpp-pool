/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 18:01:21 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/02 18:09:57 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *p = &str;
	std::string &q = str;

	std::cout << "pointer to str : " << *p << "\n";
	std::cout << "reference to str : " << q << "\n";
}
