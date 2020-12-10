/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 16:53:57 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/10 17:12:11 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat chief("chief", 150);
	std::cout << "name : " << chief.getName() << std::endl;
	chief.inc();
	Bureaucrat cool("cool guy", 6);
	chief.dec();
	std::cout << "name : " << chief.getName() << std::endl;
	chief.dec();
	Bureaucrat ok("ok", 155);

}
