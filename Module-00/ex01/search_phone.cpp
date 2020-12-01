/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_phone.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 17:23:04 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/01 19:01:27 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string	check_str(std::string str)
{
	std::string src;
	std::istringstream str1(str);

	if (str.length() > 10)
	{
		str1 >> std::setw(9) >> src;
		return src + ".";
	}
	else
		return str;
}

void	show_info(PhoneBook book)
{
	std::cout << "first name : " << book.first_name << "\n";
	std::cout << "last name : " << book.last_name << "\n";
	std::cout << "nickname : " << book.nickname << "\n";
	std::cout << "login : " << book.login_field(0, 0) << "\n";
	std::cout << "postal address : " << book.postal_field(0, 0) << "\n";
	std::cout << "phone number : " << book.phone_field(0, 0) << "\n";
	std::cout << "birthday date : " << book.birthday_field(0, 0) << "\n";
	std::cout << "favorite meal : " << book.meal_field(0, 0) << "\n";
	std::cout << "underwear color : " << book.underc_field(0, 0) << "\n";
	std::cout << "darkest secret : " << book.secret_field(0, 0) << "\n";
}

void	search_in_phonebook(PhoneBook book[8])
{
	int j;
	std::cout << "index" << '|' << "first name" << '|' << "last name" << '|' << "nickname" << '\n';
	for (int i = 0; i < 8; i++)
	{
		std::cout << i << '|' << check_str(book[i].first_name) << '|' << check_str(book[i].last_name) << '|' << check_str(book[i].nickname) << '\n';
	}
	std::cout << "enter which index you want : ";
	std::cin >> j;
	show_info(book[j]);
}
