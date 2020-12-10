/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 16:33:04 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/10 17:08:11 by stbaleba         ###   ########.fr       */
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
			throw "Bureaucrat::GradeTooHighException";
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
			throw "Bureaucrat::GradeTooLowException";
	}
	catch (char const *err)
	{
		std::cout << err << std::endl;
	}
}
