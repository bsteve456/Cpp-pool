/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 16:33:04 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/10 23:09:29 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

std::string Bureaucrat::getName() const
{
	return (Name);
}

int Bureaucrat::getGrade() const
{
	return (Grade);
}

void	Bureaucrat::inc()
{
	try
	{
		Grade += 5;
		if (Grade > 150)
			throw "Bureaucrat::GradeTooLowException";
	}
	catch (char const *err)
	{
		std::cout << err << std::endl;
	}
}

void	Bureaucrat::dec()
{
	try
	{
		Grade -= 5;
		if (Grade < 1)
			throw "Bureaucrat::GradeTooHighException";
	}
	catch (char const *err)
	{
		std::cout << err << std::endl;
	}
}

void	Bureaucrat::signForm(std::string name, int b) const
{
	if (b == 1)
		std::cout << Name << " signs " << name << std::endl;
	else
		std::cout << Name << " cannot signs " << name << " because  GradeTooLow." << std::endl;
}

void	Bureaucrat::executeForm(Form const & form)
{
	try
	{
		if (form.execute(*this) == 0)
			throw "Error: cannot exec form";
		std::cout << Name << " executes " << form.getName() << std::endl;
	}
	catch[char const *err]
	{
		std::cout << err << std::endl;
	}
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat &b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
	return (os);
}
