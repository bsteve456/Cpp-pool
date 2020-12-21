/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 18:58:46 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/03 10:35:44 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() : brain()
{}

std::string	Human::identify()
{
	return (getBrain().identify());
}

Brain	Human::getBrain()
{
	Brain cool;

	cool.setAddr((long)&brain);
	return (cool);
}

Human::~Human()
{}
