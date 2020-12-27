/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 21:34:24 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/11 01:25:10 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
	private:
		std::string target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &S);
		ShrubberyCreationForm & operator = (const ShrubberyCreationForm &S);
		ShrubberyCreationForm(std::string Target);
		~ShrubberyCreationForm();
		int	execute(Bureaucrat const & executor) const;
		std::string getTarget(void) const;
		Form *clone(std::string  Target);
};

#endif
