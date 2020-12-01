/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_functs.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 17:10:03 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/01 17:21:11 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	PhoneBook::login_field(std::string log)
{
	login = log;
}

void	PhoneBook::postal_field(std::string address)
{
	postal_address = address;
}

void	PhoneBook::phone_field(std::string phone)
{
	phone_number = phone;
}

void	PhoneBook::birthday_field(std::string birthday)
{
	birthday_rate = birthday;
}

void	PhoneBook::meal_field(std::string meal)
{
	favorite_meal = meal;
}

void	PhoneBook::underc_field(std::string underc)
{
	underwear_color = underc;
}

void	PhoneBook::secret_field(std::string secret)
{
	darkest_secret = secret;
}
