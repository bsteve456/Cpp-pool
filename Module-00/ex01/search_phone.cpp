/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_phone.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 17:23:04 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/01 18:44:06 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string	check_str(std::string str)
{
	std::string src;

	if (str.length > 10)
	{
		str >> std::setw(9) >> src;
		return src + ".";
	}
	else
		return str;
}

void	show_info(PhoneBook book)
{
	cout << "first name : " << book.first_name << "\n";
	cout << "last name : " << book.last_name << "\n";
	cout << "nickname : " << book.nickname << "\n";
	cout << "login : " << book.login_field(0, 0) << "\n";
	cout << "postal address : " << book.postal_field(0, 0) << "\n";
	cout << "phone number : " << book.phone_field(0, 0) << "\n";
	cout << "birthday date : " << book.birthday_field(0, 0) << "\n";
	cout << "favorite meal : " << book.meal_field(0, 0) << "\n";
	cout << "underwear color : " << book.underc_field(0, 0) << "\n";
	cout << "darkest secret : " << book.secret_field(0, 0) << "\n";
}

void	search_in_phonebook(PhoneBook book[8])
{
	int j;
	std::cout << "index" << '|' << "first name" << '|' << "last name" << '|' << "nickname" << '\n';
	for (int i = 0; i < 8; i++)
	{
		std::cout << i << '|' << check_str(book[i].first_name) << '|' << check_str(book[i].last_name) << '|' <<< check_str(book[i].nickname) << '\n';
	}
	cout << "enter which index you want : ";
	cin >> j;
	show_info(book[j]);
}
