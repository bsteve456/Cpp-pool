/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_phone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 16:30:47 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/01 16:55:57 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	add_phonenb1(PhoneBook Book[8], int i)
{
	std::string str;

	std::cout << "enter : first_name : ";
	getline(cin, str);
	book[i].first_name = str;
	std::cout << '\n';
	std::cout << "enter : last_name : ";
	getline(cin, str);
	book[i].last_name = str;
	std::cout << '\n';
	std::cout << "enter : nickname : ";
	getline(cin, str);
	book[i].nickname = str;
	std::cout << '\n';
}

void	add_phonenbr2(PhoneBook Book[8], int i)
{
	std::string str;

	std::cout << "enter : login : ";
	getline(cin, str);
	book[i].login_field(str);
	std::cout << '\n';
	std::cout << "enter : address : ";
	getline(cin, str);
	book[i].postal_field(str) = str;
	std::cout << '\n';
	std::cout << "enter : birthday : ";
	getline(cin, str);
	book[i].birthday_field(str) = str;
	std::cout << '\n';
	std::cout << "enter : prefer meal : ";
	getline(cin, str);
	book[i].meal_field(str) = str;
	std::cout << '\n';
	std::cout << "enter : prefer underwear color: ";
	getline(cin, str);
	book[i].underw_field(str) = str;
	std::cout << '\n';
	std::cout << "enter : darkest secret  : ";
	getline(cin, str);
	book[i].secret_field(str) = str;
	std::cout << '\n';
}
