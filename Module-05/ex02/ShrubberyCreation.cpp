/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreation.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 21:35:11 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/10 22:24:18 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreation.hpp"

void	ShrubberyCreation::execute(Bureaucrat const & executor)
{
	try
	{
		if (getSigned() == 0)
			throw "Form not signed !";
		else if(executor.getGrade() > getEGrade())
			throw "GradeTooLow";
		std::string **tab = new std::string *[9];
		std::string tab[0] = "             *\n";
		std::string tab[1] = "            *#*\n";
		std::string tab[2] = "           *5***\n";
		std::string tab[3] = "          ****#**\n";
		std::string tab[4] = "         #########\n";
		std::string tab[5] = "        #####0**#*#\n";
		std::string tab[6] = "       #0##0##0**#*#\n";
		std::string tab[7] = "            0#0\n";
		std::string tab[8] = "            000\n";
		std::string str = std::string(target) + std::string("_shrubbery");
		std::ofstream out(str);
		for(int i = 0; i < 9; i++)
		{
			out << tab[i];
			delete(tab[i]);
		}
		delete(tab);
		executor.executeForm(*this);
	}
	catch(char const *err)
	{
		std::cout << err << std::endl;
		executor.executeForm(*this);
	}
}
