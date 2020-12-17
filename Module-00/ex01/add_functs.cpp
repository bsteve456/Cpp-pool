/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_functs.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 17:10:03 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/01 18:49:41 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string	PhoneBook::login_field(std::string log, int n)
{
	if (n == 1)
		login = log;
	return (login);
}

std::string	PhoneBook::postal_field(std::string address, int n)
{
	if (n == 1)
		postal_address = address;
	return (postal_address);
}

std::string	PhoneBook::phone_field(std::string phone, int n)
{
	if (n == 1)
		phone_number = phone;
	return (phone_number);
}

std::string	PhoneBook::birthday_field(std::string birthday, int n)
{
	if (n == 1)
		birthday_date = birthday;
	return (birthday_date);
}

std::string	PhoneBook::meal_field(std::string meal, int n)
{
	if (n == 1)
		favorite_meal = meal;
	return (favorite_meal);
}

std::string	PhoneBook::underc_field(std::string underc, int n)
{
	if (n == 1)
		underwear_color = underc;
	return (underwear_color);
}

std::string	PhoneBook::secret_field(std::string secret, int n)
{
	if (n == 1)
		darkest_secret = secret;
	return (darkest_secret);
}

std::string PhoneBook::first_name_field(std::string first, int n)
{
	if (n == 1)
		first_name = first;
	return (first_name);
}

std::string PhoneBook::last_name_field(std::string last, int n)
{
	if (n == 1)
		last_name = last;
	return (last_name);
}

std::string PhoneBook::nickname_field(std::string nick, int n)
{
	if (n == 1)
		nickname = nick;
	return (nickname);
}

int			PhoneBook::Empty_field(int Empty, int n)
{
	if (n == 1)
		empty = Empty;
	return (empty);
}
