/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_functs.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 17:10:03 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/01 18:45:17 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string	PhoneBook::login_field(std::string log, int n)
{
	if (n == 1)
		login = log;
	return (login);
}

std::string	PhoneBook::postal_field(std::string address)
{
	if (n == 1)
		postal_address = address;
	return (postal_address);
}

std::string	PhoneBook::phone_field(std::string phone)
{
	if (n == 1)
		phone_number = phone;
	return (phone_number)
}

std::string	PhoneBook::birthday_field(std::string birthday)
{
	if (n == 1)
		birthday_rate = birthday;
	return (birthday_rate);
}

std::string	PhoneBook::meal_field(std::string meal)
{
	if (n == 1)
		favorite_meal = meal;
	return (favorite_meal);
}

std::string	PhoneBook::underc_field(std::string underc)
{
	if (n == 1)
		underwear_color = underc;
	return (underwear_color);
}

std::string	PhoneBook::secret_field(std::string secret)
{
	if (n == 1)
		darkest_secret = secret;
	return (darkest_secret);
}
