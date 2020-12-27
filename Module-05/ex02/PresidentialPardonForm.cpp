/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 21:35:11 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/11 00:11:37 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &P)
{
	*this = P;
}

PresidentialPardonForm & PresidentialPardonForm::operator = (const PresidentialPardonForm &P)
{
	if (this != &P)
		this->target = P.getTarget();
	return (*this);
}

int	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	try
	{
		if (this->getSigned() == 0)
			throw Form::FormNotSignedException();
		else if(executor.getGrade() > this->getEGrade())
			throw Form::GradeTooLowException();
		std::cout << this->target << " has been pardoned by Zafod Beeblebrox\n";
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

PresidentialPardonForm::PresidentialPardonForm(std::string Target) : Form("PresidentialPardonForm", 25, 5)
{
	this->target = Target;
}

std::string PresidentialPardonForm::getTarget(void) const
{
	return (this->target);
}

PresidentialPardonForm::~PresidentialPardonForm()
{}
