/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 21:35:11 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/11 00:12:22 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &R)
{
	*this = R;
}

RobotomyRequestForm & RobotomyRequestForm::operator = (const RobotomyRequestForm &R)
{
	if (this != &R)
		this->target = R.getTarget();
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(std::string Target) : Form("RobotomyRequestForm", 72, 45)
{
	this->target = Target;
}

int	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	try
	{
		if (this->getSigned() == 0)
			throw Form::FormNotSignedException();
		else if(executor.getGrade() > this->getEGrade())
			throw Form::GradeTooLowException();
		std::cout << "* drilling noises * " << this->target << " has been robotomized successfully 50\% of time. And the other 50\% is a failure\n";
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
	return(1);
}

std::string RobotomyRequestForm::getTarget(void) const
{
	return (this->target);
}

RobotomyRequestForm::~RobotomyRequestForm()
{}
