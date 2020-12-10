/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 16:53:57 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/10 19:04:34 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


int main()
{
	Bureaucrat chief("chief", 150);
	Form low("LowSkillForm", 130, 50);
	low.beSigned(chief);
	std::cout << low;
	Bureaucrat cool("cool guy", 10);
	low.beSigned(cool);
	std::cout << low;
}
