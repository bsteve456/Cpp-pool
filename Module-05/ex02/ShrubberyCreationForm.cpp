/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 21:35:11 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/11 00:10:39 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

int	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	try
	{
		if (getSigned() == 0)
			throw "Form not signed !";
		else if(executor.getGrade() > getEGrade())
			throw "GradeTooLow";
		std::string tab[9];
		tab[0] = "             *\n";
		tab[1] = "            *#*\n";
		tab[2] = "           *5***\n";
		tab[3] = "          ****#**\n";
		tab[4] = "         #########\n";
		tab[5] = "        #####0**#*#\n";
		tab[6] = "       #0##0##0**#*#\n";
		tab[7] = "            0#0\n";
		tab[8] = "            000\n";
		std::string str = std::string(target) + std::string("_shrubbery");
		std::ofstream out(str);
		for(int i = 0; i < 9; i++)
			out << tab[i];
		return (1);
	}
	catch(char const *err)
	{
		std::cout << executor.getName() << " " << err << std::endl;
		return (0);
	}
}
