/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 11:39:29 by stbaleba          #+#    #+#             */
/*   Updated: 2021/01/10 12:37:05 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "identify.hpp"

Base::~Base()
{}

void	identify_from_pointer(Base * p)
{
	A *a;
	B *b;
	C *c;

	a = dynamic_cast<A *> (p);
	b = dynamic_cast<B *> (p);
	c = dynamic_cast<C *> (p);
	if (a != NULL)
		std::cout << "A" << std::endl;
	else if (b != NULL)
		std::cout << "B" << std::endl;
	else if (c != NULL)
		std::cout << "C" << std::endl;
	else
		std::cout << "Base not found !" << std::endl;
}

void	identify_from_reference(Base & p)
{
	A *a;
	B *b;
	C *c;

	a = dynamic_cast<A *> (&p);
	b = dynamic_cast<B *> (&p);
	c = dynamic_cast<C *> (&p);

	if (a != NULL)
		std::cout << "A" << std::endl;
	else if (b != NULL)
		std::cout << "B" << std::endl;
	else if (c != NULL)
		std::cout << "C" << std::endl;
	else
		std::cout << "Base not found !" << std::endl;
}


int main()
{
	A a;
	B b;
	C c;
	Base E;

	identify_from_pointer(&a);
	identify_from_pointer(&b);
	identify_from_pointer(&c);
	identify_from_pointer(&E);

	identify_from_reference(a);
	identify_from_reference(b);
	identify_from_reference(c);
	identify_from_reference(E);
}
