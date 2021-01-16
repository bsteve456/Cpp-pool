/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 21:33:18 by stbaleba          #+#    #+#             */
/*   Updated: 2021/01/16 20:08:44 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main()
{
	std::cout << "       ---INT STACK---" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);

	std::cout <<"mstack top : " <<mstack.top() << std::endl;

	mstack.pop();
	MutantStack<int> mstack1(mstack);
	std::cout << "mstack1 top : " << mstack1.top() << std::endl;
	std::cout << "mstack size : "<< mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(6);
	mstack.push(737);
	mstack.push(0);
	std::cout << "mstack size : "<< mstack.size() << std::endl;

	std::cout << "\nIteration start" << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);

	std::cout << "       ---STD::STRING STACK---" << std::endl;
	MutantStack<std::string> mstack2;
	mstack2.push("Hello");
	mstack2.push("World");

	std::cout <<"mstack top : " <<mstack2.top() << std::endl;

	mstack2.pop();
	MutantStack<std::string> mstack3(mstack2);
	std::cout << "mstack1 top : " << mstack3.top() << std::endl;
	std::cout << "mstack size : "<< mstack2.size() << std::endl;

	mstack2.push("Apple");
	mstack2.push("MAngue");
	mstack2.push("figue");
	mstack2.push("palme");
	std::cout << "mstack size : "<< mstack2.size() << std::endl;

	std::cout << "\nIteration start" << std::endl;
	MutantStack<std::string>::iterator it1 = mstack2.begin();
	MutantStack<std::string>::iterator ite1 = mstack2.end();

	++it1;
	--it1;
	while (it1 != ite1)
	{
	std::cout << *it1 << std::endl;
	++it1;
	}
	std::stack<std::string> r(mstack2);

	return 0;
}
