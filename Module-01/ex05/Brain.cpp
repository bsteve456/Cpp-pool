/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 18:39:11 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/03 10:35:22 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void		Brain::setAddr(long address)
{
	addr = address;
}

std::string	Brain::identify() const
{
	std::string result;
	std::stringstream ss;
	ss << std::hex << addr;
	result = ss.str();
	return ("0x" + result);
}
