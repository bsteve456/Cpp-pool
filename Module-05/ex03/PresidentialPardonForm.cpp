/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 21:35:11 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/11 01:01:32 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

int	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	try
	{
		if (getSigned() == 0)
			throw "Form not signed !";
		else if(executor.getGrade() > getEGrade())
			throw "GradeTooLow";
		std::cout << target << " has been pardoned by Zafod Beeblebrox\n";
		return (1);
	}
	catch(char const *err)
	{
		std::cout << executor.getName() << " " << err << std::endl;
		return (0);
	}
}

Form*	PresidentialPardonForm::clone(std::string Target)
{
	target = Target;
	return (new PresidentialPardonForm(*this));
}
