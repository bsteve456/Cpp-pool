/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 18:13:03 by stbaleba          #+#    #+#             */
/*   Updated: 2021/01/08 11:55:30 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : Name("none"),
SGrade(0),
EGrade(0),
Signed(false)
{}

Form::Form(const Form &F) : Name(F.getName()), SGrade(F.getSGrade()), EGrade(F.getEGrade()), Signed(F.getSigned())
{}

Form & Form::operator = (const Form &F)
{
	if (this != &F)
		this->Signed = F.getSigned();
	return (*this);
}

Form::Form(std::string name, int sgrade, int egrade) : Name(name) , SGrade(sgrade) , EGrade(egrade), Signed(false)
{
	try
	{
		if (sgrade > 150 || egrade > 150)
			throw Form::GradeTooLowException();
		else if (sgrade < 1 || egrade < 1)
			throw Form::GradeTooHighException();
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
}

const char  * Form::GradeTooHighException::what() const throw()
{
	return "Form Grade Is Too High";
}

const char  * Form::GradeTooLowException::what() const throw()
{
	return "Form Grade Is Too Low";
}

const char  * Form::FormNotSignedException::what() const throw()
{
	return "Form Not Signed !";
}
std::string Form::getName() const
{
	return (this->Name);
}

int			Form::getSGrade() const
{
	return (this->SGrade);
}

int			Form::getEGrade() const
{
	return (this->EGrade);
}

int			Form::getSigned() const
{
	if(this->Signed == false)
		return (0);
	else
		return (1);
}

void		Form::beSigned(Bureaucrat const &s)
{
	try
	{
		if (s.getGrade() > this->SGrade)
			throw Form::GradeTooLowException();
		this->Signed = true;
		s.signForm(this->Name, 1);
	}
	catch (Form::GradeTooLowException &e)
	{
		s.signForm(this->Name, 0);
	}
}

Form::~Form()
{}

std::ostream& operator<<(std::ostream& os, const Form &f)
{
	if (f.getSigned() == 0)
		os << "Form : " << f.getName() << " SGrade : " << f.getSGrade() << " EGrade : " << f.getEGrade() << " Signed : NO" << std::endl;
	else
		os << "Form : " << f.getName() << " SGrade : " << f.getSGrade() << " EGrade : " << f.getEGrade() << " Signed : YES" << std::endl;
	return os;
}

