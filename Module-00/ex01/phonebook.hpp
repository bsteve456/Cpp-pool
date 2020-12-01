/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 15:32:57 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/01 17:19:46 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>

class PhoneBook
{
	private:
		std::string login;
		std::string postal_address;
		std::string phone_number;
		std::string	birthday_date;
		std::string	favorite_meal;
		std::string	underwear_water;
		std::string	darkest_secret;
	public:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		void login_field(std::string log);
		void postal_field(std::string address);
		void phone_field(std::string phone);
		void birthday_field(std::string birthday);
		void meal_field(std::string meal);
		void underc_field(std::string underc);
		void secret_field(std::string secret);
}

#endif
