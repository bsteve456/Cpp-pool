/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 01:07:54 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/11 01:32:10 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Form * Intern::makeForm(std::string name, std::string target)
{
	for (int i = 0; i < 3; i++)
	{
		if(name.compare(forms[i]->getName()) == 0)
		{
			std::cout << "Intern creates " << forms[i]->getName() << std::endl;
			return (forms[i]->clone(target));
		}
	}
	std::cout << "Error : no form found named : "  << name << std::endl;
	return (0);
}
