/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 17:49:22 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/11 01:36:57 by stbaleba         ###   ########.fr       */
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
		Form();
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
		class FormNotSignedException : std::exception
		{
			public:
				const char * what() const throw();
		};
		Form(const Form &F);
		virtual Form & operator = (Form &F);
		Form(std::string name, int sgrade, int egrade);
		std::string getName() const;
		int			getSGrade() const;
		int			getEGrade() const;
		int			getSigned() const;
		void		beSigned(Bureaucrat const &s);
		int		virtual execute(Bureaucrat const & executor) const = 0;
		Form 	virtual	*clone(std::string  Target) = 0;
		virtual ~Form();
};
std::ostream& operator<<(std::ostream& os, const Form &f);
#endif
