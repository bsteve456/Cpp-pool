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
	if(str.compare("") == 0)
		return (0);
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
	std::cout << "first name : " << book.getFirst_name() << std::endl;
	std::cout << "last name : " << book.getLast_name() << std::endl;
	std::cout << "nickname : " << book.getNickname() << std::endl;
	std::cout << "login : " << book.getLogin() << std::endl;
	std::cout << "postal address : " << book.getPostal() << std::endl;
	std::cout << "phone number : " << book.getPhone() << std::endl;
	std::cout << "birthday date : " << book.getBirthday() << std::endl;
	std::cout << "favorite meal : " << book.getMeal() << std::endl;
	std::cout << "underwear color : " << book.getUnderc() << std::endl;
	std::cout << "darkest secret : " << book.getSecret() << std::endl;
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
		if (book[i].getEmpty() != 0)
		{
			std::cout << std::setw(10) << i << '|';
			perfect_width(book[i].getFirst_name().length(), book[i].getFirst_name());
			std::cout << '|';
			perfect_width(book[i].getLast_name().length(), book[i].getLast_name());
			std::cout << '|';
			perfect_width(book[i].getNickname().length(), book[i].getNickname());
			std::cout << '\n';
		}
	}
}

void	search_in_phonebook(PhoneBook book[8])
{
	std::string src;
	int j = 0;
	if (book[0].getEmpty() == 0)
	{
		std::cout << "Register is empty !" << std::endl;
		return ;
	}
	display(book);
	std::cout << "enter which index you want : ";
	std::getline(std::cin, src);
	if (check_number(src) == 1)
	{
		j = std::stoi(src);
		if (j >= 0 && j < 8 && book[j].getEmpty() != 0)
			show_info(book[j]);
		else
			std::cout << "index not between 0 and 8 or there is no number in this index !" << std::endl;
	}
	else
		std::cout << "Index not between 0 and 8" << std::endl;
}
