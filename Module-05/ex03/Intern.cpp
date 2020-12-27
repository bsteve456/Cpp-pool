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

Intern::Intern()
{
	this->forms = new Form *[3];
	this->forms[0] = new ShrubberyCreationForm("none");
	this->forms[1] = new RobotomyRequestForm("none");
	this->forms[2] = new PresidentialPardonForm("none");
}

Intern::Intern(const Intern &I)
{
	*this = I;
}

Intern & Intern::operator = (const Intern &I)
{
	if (this != &I)
		this->forms = I.getForms();
	return (*this);
}

Intern::~Intern()
{
	for (int i = 0; i < 3; i++)
		delete(this->forms[i]);
	delete [] this->forms;
}

Form ** Intern::getForms(void) const
{
	return (this->forms);
}

Form * Intern::makeForm(std::string name, std::string target)
{
	for (int i = 0; i < 3; i++)
	{
		if(name.compare(this->forms[i]->getName()) == 0)
		{
			std::cout << "Intern creates " << this->forms[i]->getName() << std::endl;
			return (this->forms[i]->clone(target));
		}
	}
	std::cout << "Error : no form found named : "  << name << std::endl;
	return (0);
}
