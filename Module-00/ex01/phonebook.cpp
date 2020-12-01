/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 15:32:49 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/01 17:00:00 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	parse(PhoneBook Book[8], std::string str, int *i)
{
	if (str.compare("EXIT") == 0)
		exit(0);
	else if (str.compare("ADD") == 0)
	{
		add_phonenb1(book, *i);
		add_phonenb2(book, *i);
		*i += 1;
	}
	else if (str.compare("SEARCH") == 0)
		search_in_phonebook(book);
	else
		std::cout << "Error: String name";
}

int main()
{
	PhoneBook book[8];
	std::string str;
	int i = 0;

	while(1)
	{
		std::cout << "ADD, SEARCH or EXIT the PhoneBook :" << '\n';
		getline(cin, str);
		parse(str, book, &i);
	}
}
