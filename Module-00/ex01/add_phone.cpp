/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_phone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 16:30:47 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/01 22:21:25 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	add_phonenb1(PhoneBook book[8], int i)
{
	std::string str;

	std::cout << "enter : first_name : ";
	getline(std::cin, str);
	book[i].setFirst_name(str);
	std::cout << "enter : last_name : ";
	getline(std::cin, str);
	book[i].setLast_name(str);
	std::cout << "enter : nickname : ";
	getline(std::cin, str);
	book[i].setNickname(str);
}

void	add_phonenb2(PhoneBook book[8], int i)
{
	std::string str;

	std::cout << "enter : login : ";
	getline(std::cin, str);
	book[i].setLogin(str);
	std::cout << "enter : address : ";
	getline(std::cin, str);
	book[i].setPostal(str);
	std::cout << "enter : phone number : ";
	getline(std::cin, str);
	book[i].setPhone(str);
	std::cout << "enter : birthday : ";
	getline(std::cin, str);
	book[i].setBirthday(str);
	std::cout << "enter : prefer meal : ";
	getline(std::cin, str);
	book[i].setMeal(str);
	std::cout << "enter : prefer underwear color: ";
	getline(std::cin, str);
	book[i].setUnderc(str);
	std::cout << "enter : darkest secret  : ";
	getline(std::cin, str);
	book[i].setSecret(str);
}
