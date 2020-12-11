/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 21:35:11 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/11 01:06:26 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

int	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	try
	{
		if (getSigned() == 0)
			throw "Form not signed !";
		else if(executor.getGrade() > getEGrade())
			throw "GradeTooLow";
		std::cout << "* drilling noises * " << target << " has been robotomized successfully 50\% of time. And the other 50\% is a failure\n";
		return (1);
	}
	catch(char const *err)
	{
		std::cout << executor.getName() << " " << err << std::endl;
		return (0);
	}
}

Form*	RobotomyRequestForm::clone(std::string Target)
{
	target = Target;
	return (new RobotomyRequestForm(*this));
}
