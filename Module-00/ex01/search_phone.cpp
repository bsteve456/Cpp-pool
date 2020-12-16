/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_phone.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 17:23:04 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/01 22:24:06 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int		check_number(std::string str)
{
	for (std::string::size_type i = 0; i < str.length(); i++)
	{
		if(isdigit(str[i]) == 0)
			return (0);
	}
	return (1);
}

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
	std::cout << "first name : " << book.first_name_field("", 0) << "\n";
	std::cout << "last name : " << book.last_name_field("", 0) << "\n";
	std::cout << "nickname : " << book.nickname_field("", 0) << "\n";
	std::cout << "login : " << book.login_field("", 0) << "\n";
	std::cout << "postal address : " << book.postal_field("", 0) << "\n";
	std::cout << "phone number : " << book.phone_field("", 0) << "\n";
	std::cout << "birthday date : " << book.birthday_field("", 0) << "\n";
	std::cout << "favorite meal : " << book.meal_field("", 0) << "\n";
	std::cout << "underwear color : " << book.underc_field("", 0) << "\n";
	std::cout << "darkest secret : " << book.secret_field("", 0) << "\n";
}

void	display(PhoneBook book[8])
{
	std::string str;

	str = "index";
	perfect_width(str.length(), str);
	std::cout << '|';
	str = "first name";
	perfect_width(str.length(), str);
	std::cout << '|';
	str = "last name";
	perfect_width(str.length(), str);
	std::cout << '|';
	str = "nickname";
	perfect_width(str.length(), str);
	std::cout << '\n';
	for (int i = 0; i < 8; i++)
	{
		if (book[i].empty != 0)
		{
			std::cout << std::setw(10) << i << '|';
			perfect_width(book[i].first_name_field("", 0).length(), book[i].first_name_field("", 0));
			std::cout << '|';
			perfect_width(book[i].last_name_field("", 0).length(), book[i].last_name_field("", 0));
			std::cout << '|';
			perfect_width(book[i].nickname_field("", 0).length(), book[i].nickname_field("", 0));
			std::cout << '\n';
		}
	}
}

void	search_in_phonebook(PhoneBook book[8])
{
	std::string src;
	int j = 0;
	display(book);
	std::cout << "enter which index you want : ";
	std::getline(std::cin, src);
	if (check_number(src) == 1)
	{
		j = std::stoi(src);
		if (j >= 0 && j < 8)
			show_info(book[j]);
	}
	else
		std::cout << "Index not between 0 and 8" << '\n';
}
