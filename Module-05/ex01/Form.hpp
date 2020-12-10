/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 17:49:22 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/10 18:15:46 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string const Name;
		int	const	SGrade;
		int const	EGrade;
		bool Signed = false;
	public:
		Form(std::string name, int sgrade, int egrade) : Name(name) : SGrade(sgrade) : EGrade(egrade)
		{
			try
			{
				if (sgrade > 150 || egrade > 150)
					throw "Form::GradeTooLowException";
				else if (sgrade < 1 || egrade < 1)
					throw "Form::GradeTooHighException";
			}
			catch (char const *err)
			{
				std::cout << err << std::endl;
			}
		}
		std::string getName() const;
		int			getSGrade() const;
		int			getEGrade() const;
		void		beSigned(Bureaucrat const &s);
		~Form() {}
};
std::ostream& operator<<(std::ostream& os, const Form &f);
#endif
