/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 16:33:09 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/10 22:49:26 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;
class Bureaucrat
{
	private:
		std::string const Name;
		int Grade;
	public:
		class GradeTooHighException : std::exception
		{
			public:
				const char * what() const throw();
		};
		class GradeTooLowException : std::exception
		{
			public:
				const char * what() const throw();
		};
		class CannotExecFormException : std::exception
		{
			public:
				const char * what() const throw();
		};
		Bureaucrat();
		Bureaucrat(const Bureaucrat &B);
		Bureaucrat & operator = (const Bureaucrat &B);
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		std::string getName() const;
		int			getGrade() const;
		void		inc();
		void		dec();
		void		signForm(std::string Name, int b) const;
		void		executeForm(Form const & form);
};
std::ostream& operator<<(std::ostream& os, const Bureaucrat &b);

#endif
