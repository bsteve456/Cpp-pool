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
		Intern();
		Intern(const Intern &I);
		Intern & operator = (const Intern &I);
		Form 	**getForms(void) const;
		~Intern();
		Form	*makeForm(std::string name, std::string target);
};
#endif
