/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 16:53:57 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/11 00:08:11 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main()
{
	Bureaucrat chief("chief", 150);
	Bureaucrat cool("cool guy", 10);
	Bureaucrat ok("ok guy", 65);


	ShrubberyCreationForm form1("steve");
	std::cout << form1;
	RobotomyRequestForm form2("good");
	std::cout << form2;
	PresidentialPardonForm form3("ok");
	std::cout << form3;
	std::cout << "      ----FIRST PART----\n\n";
	ok.executeForm(form1);
	form1.beSigned(chief);
	form1.beSigned(ok);
	chief.executeForm(form1);
	ok.executeForm(form1);
	std::cout << "      ----SECOND PART----\n\n";
	ok.executeForm(form2);
	form2.execute(cool);
	ok.executeForm(form2);
	form2.beSigned(chief);
	form2.beSigned(ok);
	chief.executeForm(form2);
	ok.executeForm(form2);
	cool.executeForm(form2);
	std::cout << "      ----THIRD PART----\n\n";
	ok.executeForm(form3);
	form3.beSigned(chief);
	form3.beSigned(ok);
	form3.beSigned(cool);
	chief.executeForm(form3);
	ok.executeForm(form3);
	cool.executeForm(form3);
	cool.dec();
	cool.executeForm(form3);
}
