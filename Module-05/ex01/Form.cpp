/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 18:13:03 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/10 18:46:55 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

std::string Form::getName() const
{
	return (Name);
}

int			Form::getSGrade() const
{
	return (SGrade);
}

int			Form::getEGrade() const
{
	return (EGrade);
}

void		Form::beSigned(Bureaucrat const &s)
{
	try
	{
		if (s.getGrade() > SGrade)
			throw "GradeTooLowException";
		Signed = true;
		s.signForm(Name, 1);
	}
	catch(char const *err)
	{
		std::cout << err << std::endl;
		s.signForm(Name, 0);
	}
}

std::ostream& operator<<(std::ostream& os, const Form &f)
{
	os << "Form : " << f.getName() << " SGrade : " << f.getSGrade() << " EGrade : " << f.getEGrade << std::endl;
	return os;
}

