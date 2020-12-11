/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 01:07:36 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/11 01:31:45 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	private:
		Form **forms;
	public:
		Intern()
		{
			forms = new Form *[3];
			forms[0] = new ShrubberyCreationForm("none");
			forms[1] = new RobotomyRequestForm("none");
			forms[2] = new PresidentialPardonForm("none");
		}
		~Intern()
		{
			for (int i = 0; i < 3; i++)
				delete(forms[i]);
			delete(forms);
		}
		Form	*makeForm(std::string name, std::string target);
};
#endif
