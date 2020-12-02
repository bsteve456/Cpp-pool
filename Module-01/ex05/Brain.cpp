/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 18:39:11 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/03 00:37:04 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

std::string	Brain::identify() const
{
	long addr1;

	addr(0, &addr1);
	std::string result;
	std::stringstream ss;
	ss << std::hex << addr1;
	result = ss.str();
	return ("0x" + result);
}
