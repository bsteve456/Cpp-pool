/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 21:35:11 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/10 22:24:09 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

void	RobotomyRequestForm::execute(Bureaucrat const & executor)
{
	try
	{
		if (getSigned() == 0)
			throw "Form not signed !";
		else if(executor.getGrade() > getEGrade())
			throw "GradeTooLow";
		std::cout << "* drilling noises * " << target << " has been robotomized successfully 50\% of time. And the other 50\% is a failure\n";
		executor.executeForm(*this);
	}
	catch(char const *err)
	{
		std::cout << err << std::endl;
		executor.executeForm(*this);
	}
}
