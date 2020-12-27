/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 21:34:24 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/11 01:39:22 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		std::string target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &S);
		PresidentialPardonForm & operator = (const PresidentialPardonForm &S);
		PresidentialPardonForm(std::string Target);
		~PresidentialPardonForm();
		std::string getTarget(void) const;
		int	execute(Bureaucrat const & executor) const;
		Form *clone(std::string  Target);
};

#endif
