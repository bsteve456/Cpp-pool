/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 15:32:57 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/01 21:42:17 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <climits>
# include <cctype>

class PhoneBook
{
	private:
		std::string login;
		std::string postal_address;
		std::string phone_number;
		std::string	birthday_date;
		std::string	favorite_meal;
		std::string	underwear_color;
		std::string	darkest_secret;
		std::string first_name;
		std::string last_name;
		std::string nickname;
	public:
		int	empty;
		std::string first_name_field(std::string first, int n);
		std::string last_name_field(std::string last, int n);
		std::string nickname_field(std::string nick, int n);
		std::string login_field(std::string log, int n);
		std::string postal_field(std::string address, int n);
		std::string phone_field(std::string phone, int n);
		std::string birthday_field(std::string birthday, int n);
		std::string meal_field(std::string meal, int n);
		std::string underc_field(std::string underc, int n);
		std::string secret_field(std::string secret, int n);
};
void	search_in_phonebook(PhoneBook book[8]);
void	add_phonenb1(PhoneBook book[8], int i);
void	add_phonenb2(PhoneBook book[8], int i);
void	perfect_width(std::string::size_type length, std::string src);
std::string	check_str(std::string str);
#endif
