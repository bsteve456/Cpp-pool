/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 21:33:18 by stbaleba          #+#    #+#             */
/*   Updated: 2021/01/15 01:00:35 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main()
{
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
//	std::stack<int> s(mstack);
	return 0;
}
