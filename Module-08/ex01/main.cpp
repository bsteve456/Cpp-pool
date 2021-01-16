/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 14:21:54 by stbaleba          #+#    #+#             */
/*   Updated: 2021/01/16 18:32:48 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
	Span sp = Span(5);
	srand(time(NULL));
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "OUT OF LIMIT TEST START" << std::endl;
	sp.addNumber(100);
	std::cout << "OUT OF LIMIT TEST END" << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	Span res = Span(10000);
	std::cout << "TEST WITH 10000 NUMBERS" << std::endl;
	res.fill();
	std::cout << res.getCount() << std::endl;
	std::cout << res.shortestSpan() << std::endl;
	std::cout << res.longestSpan() << std::endl;
	Span a(1);
	a.addNumber(1);
	std::cout << "FAIL TEST" << std::endl;
	std::cout << a.shortestSpan() << std::endl;
	std::cout << a.longestSpan() << std::endl;
	Span b;
	std::cout << "FAIL TEST" << std::endl;
	std::cout << b.shortestSpan() << std::endl;
	std::cout << b.longestSpan() << std::endl;
	Span c(3);
	c.addNumber(5);
	std::cout << "FAIL TEST" << std::endl;
	std::cout << c.shortestSpan() << std::endl;
	std::cout << c.longestSpan() << std::endl;
	c.addNumber(-5);
	std::cout << "PASS TEST" << std::endl;
	std::cout << c.shortestSpan() << std::endl;
	std::cout << c.longestSpan() << std::endl;
}
