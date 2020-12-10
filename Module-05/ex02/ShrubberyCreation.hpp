/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreation.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 21:34:24 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/10 23:02:10 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_HPP
# define SHRUBBERY_CREATION_HPP

#include "Form.hpp"

class ShrubberyCreation : public Form
{
	private:
		std::string target;
	public:
		ShrubberyCreation(std::string Target) : Form("ShrubberyCreationForm", 145, 137)
		{
			target = Target;
		}
		~ShrubberyCreation() {}
		int	execute(Bureaucrat const & executor) const;
};

#endif
