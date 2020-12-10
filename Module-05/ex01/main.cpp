/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 16:53:57 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/10 17:23:08 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat chief("chief", 150);
	std::cout << chief;
	chief.inc();
	Bureaucrat cool("cool guy", 6);
	cool.dec();
	std::cout << cool;
	cool.dec();
	Bureaucrat ok("ok", 155);
	chief.dec();
	std::cout << chief;
}
