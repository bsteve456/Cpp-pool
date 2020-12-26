/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 16:33:04 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/10 19:05:04 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{}

Bureaucrat::Bureaucrat(const Bureaucrat &B) : Name(B.getName())
{
	*this = B;
}

Bureaucrat & Bureaucrat::operator = (const Bureaucrat &B)
{
	if (this != &B)
		this->Grade = B.getGrade();
	return (*this);
}

Bureaucrat::Bureaucrat(std::string name, int grade) : Name(name)
{
	try
	{
		if (grade < 1)
			throw (Bureaucrat::GradeTooHighException());
		else if (grade > 150)
			throw (Bureaucrat::GradeTooLowException());
		this->Grade = grade;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
}

const char  * Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade Is Too High";
}

const char  * Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade Is Too Low";
}

std::string Bureaucrat::getName() const
{
	return (this->Name);
}

int Bureaucrat::getGrade() const
{
	return (this->Grade);
}

void	Bureaucrat::signForm(std::string name, int b) const
{
	if (b == 1)
		std::cout << this->Name << " signs " << name << std::endl;
	else
		std::cout << this->Name << " cannot signs " << name << " because  GradeTooLow." << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat &b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
	return (os);
}
