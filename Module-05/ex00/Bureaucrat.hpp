/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 16:33:09 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/10 17:26:39 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	private:
		std::string const Name = "burea";
		int Grade;
	public:
		Bureaucrat(std::string name, int grade) : Name(name)
		{
			try
			{
				if(grade < 1)
					throw "Bureaucrat::GradeTooHighException";
				else if(grade > 150)
					throw "Bureaucrat::GradeTooLowException";
				Grade = grade;
			}
			catch (char const *err)
			{
				std::cout << err << std::endl;
			}
		}
		~Bureaucrat() {}
		std::string getName() const;
		int			getGrade() const;
		void		inc();
		void		dec();
};
std::ostream& operator<<(std::ostream& os, const Bureaucrat &b);

#endif
