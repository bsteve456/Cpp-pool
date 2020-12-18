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

void	PhoneBook::setLogin(std::string log)
{
	login = log;
}

void	PhoneBook::setPostal(std::string address)
{
	postal_address = address;
}

void	PhoneBook::setPhone(std::string phone)
{
	phone_number = phone;
}

void	PhoneBook::setBirthday(std::string birthday)
{
	birthday_date = birthday;
}

void	PhoneBook::setMeal(std::string meal)
{
	favorite_meal = meal;
}

void	PhoneBook::setUnderc(std::string underc)
{
	underwear_color = underc;
}

void	PhoneBook::setSecret(std::string secret)
{
	darkest_secret = secret;
}

void PhoneBook::setFirst_name(std::string first)
{
	first_name = first;
}

void PhoneBook::setLast_name(std::string last)
{
	last_name = last;
}

void PhoneBook::setNickname(std::string nick)
{
	nickname = nick;
}

void	PhoneBook::setEmpty(int Empty)
{
	empty = Empty;
}

std::string		PhoneBook::getFirst_name(void)
{
	return (first_name);
}

std::string		PhoneBook::getLast_name(void)
{
	return (last_name);
}

std::string		PhoneBook::getNickname(void)
{
	return (nickname);
}

std::string		PhoneBook::getLogin(void)
{
	return (login);
}

std::string		PhoneBook::getPostal(void)
{
	return (postal_address);
}

std::string		PhoneBook::getPhone(void)
{
	return (phone_number);
}

std::string	PhoneBook::getBirthday(void)
{
	return (birthday_date);
}

std::string		PhoneBook::getMeal(void)
{
	return (favorite_meal);
}

std::string		PhoneBook::getUnderc(void)
{
	return (underwear_color);
}

std::string		PhoneBook::getSecret(void)
{
	return (darkest_secret);
}

int			PhoneBook::getEmpty(void)
{
	return (empty);
}
