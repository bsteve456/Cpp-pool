/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 21:35:11 by stbaleba          #+#    #+#             */
/*   Updated: 2021/01/08 11:15:48 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &S)
{
	*this = S;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator = (const ShrubberyCreationForm &S)
{
	if (this != &S)
		this->target = S.getTarget();
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string Target) : Form("ShrubberyCreationForm", 145, 137)
{
	this->target = Target;
}

int	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	try
	{
		if (this->getSigned() == 0)
			throw Form::FormNotSignedException();
		else if(executor.getGrade() > this->getEGrade())
			throw Form::GradeTooLowException();
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
		std::ofstream out(str.c_str());
		for(int i = 0; i < 9; i++)
			out << tab[i];
		return (1);
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << executor.getName() << " " << e.what() << std::endl;
		return (0);
	}
	catch (Form::FormNotSignedException &e)
	{
		std::cout << executor.getName() << " " << e.what() << std::endl;
		return (0);
	}
	return (1);
}

std::string ShrubberyCreationForm::getTarget(void) const
{
	return (this->target);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}
