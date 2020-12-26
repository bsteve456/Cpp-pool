/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 16:33:09 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/10 17:57:00 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

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
		Bureaucrat();
		Bureaucrat(const Bureaucrat &B);
		Bureaucrat & operator = (const Bureaucrat &B);
		Bureaucrat(std::string name, int grade);
		~Bureaucrat() {}
		std::string getName() const;
		int			getGrade() const;
		void		inc();
		void		dec();
};
std::ostream& operator<<(std::ostream& os, const Bureaucrat &b);

#endif
