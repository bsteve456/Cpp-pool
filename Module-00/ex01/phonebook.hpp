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
		int			empty;

	public:
		void		setFirst_name(std::string first);
		void		setLast_name(std::string last);
		void		setNickname(std::string nick);
		void		setLogin(std::string log);
		void		setPostal(std::string address);
		void		setPhone(std::string phone);
		void 		setBirthday(std::string birthday);
		void		setMeal(std::string meal);
		void		setUnderc(std::string underc);
		void		setSecret(std::string secret);
		void		setEmpty(int Empty);
		std::string	getFirst_name(void);
		std::string	getLast_name(void);
		std::string	getNickname(void);
		std::string	getLogin(void);
		std::string	getPostal(void);
		std::string	getPhone(void);
		std::string	getBirthday(void);
		std::string	getMeal(void);
		std::string	getUnderc(void);
		std::string	getSecret(void);
		int			getEmpty(void);
};
void	search_in_phonebook(PhoneBook book[8]);
void	add_phonenb1(PhoneBook book[8], int i);
void	add_phonenb2(PhoneBook book[8], int i);
void	check_str(std::string str);
#endif
