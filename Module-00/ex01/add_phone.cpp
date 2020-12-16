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
	book[i].first_name_field(str, 1);
	std::cout << "enter : last_name : ";
	getline(std::cin, str);
	book[i].last_name_field(str, 1);
	std::cout << "enter : nickname : ";
	getline(std::cin, str);
	book[i].nickname_field(str, 1);
}

void	add_phonenb2(PhoneBook book[8], int i)
{
	std::string str;

	std::cout << "enter : login : ";
	getline(std::cin, str);
	book[i].login_field(str, 1);
	std::cout << "enter : address : ";
	getline(std::cin, str);
	book[i].postal_field(str, 1) = str;
	std::cout << "enter : birthday : ";
	getline(std::cin, str);
	book[i].birthday_field(str, 1) = str;
	std::cout << "enter : prefer meal : ";
	getline(std::cin, str);
	book[i].meal_field(str, 1) = str;
	std::cout << "enter : prefer underwear color: ";
	getline(std::cin, str);
	book[i].underc_field(str, 1) = str;
	std::cout << "enter : darkest secret  : ";
	getline(std::cin, str);
	book[i].secret_field(str, 1) = str;
}

void	perfect_width(std::string::size_type length, std::string src)
{
	length = (length > 10) ? 10 : length;
	std::cout << std::setw(10) << check_str(src);
}
