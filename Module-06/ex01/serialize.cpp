/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 13:53:54 by stbaleba          #+#    #+#             */
/*   Updated: 2021/01/09 22:19:56 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

void * serialize(void)
{
	Data *data = new Data();

	data->s1 = "azercf45";
	data->n = 789;
	data->s2 = "a9erZZT5";
	return (reinterpret_cast<void *>(data));
}


Data	* deserialize(void * raw)
{
	return (reinterpret_cast<Data *>(raw));
}


int main()
{
	void *data = 0;
	Data *res;
	data = serialize();
	std::cout << "Raw bytes : " << data << std::endl;
	res = deserialize(data);
	std::cout << "s1 : "<< res->s1 << std::endl;
	std::cout << "n : " << res->n << std::endl;
	std::cout << "s2 : " << res->s2 << std::endl;
	delete(res);
}
