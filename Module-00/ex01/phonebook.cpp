/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 15:32:49 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/01 22:28:14 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	parse(PhoneBook book[8], std::string str, int *i)
{
	if (str.compare("EXIT") == 0)
		exit(0);
	else if (str.compare("ADD") == 0)
	{
		if (*i < 8)
		{
			add_phonenb1(book, *i);
			add_phonenb2(book, *i);
			book[*i].setEmpty(1);
			*i += 1;
		}
		else
			std::cout << "Can't Add more than 8 phones sorry." << std::endl;
	}
	else if (str.compare("SEARCH") == 0)
		search_in_phonebook(book);
	else
		std::cout << "Error: String name." << std::endl;
}

int main()
{
	PhoneBook book[8];
	std::string str;
	int i = 0;

	for (int j = 0; j < 8; j++)
		book[j].setEmpty(0);
	while(1)
	{
		std::cout << "ADD, SEARCH or EXIT the PhoneBook : ";
		std::getline(std::cin, str);
		if(std::cin.eof())
			return (0);
		parse(book, str ,&i);
	}
}
