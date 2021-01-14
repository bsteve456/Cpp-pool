/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 14:21:54 by stbaleba          #+#    #+#             */
/*   Updated: 2021/01/14 14:55:47 by stbaleba         ###   ########.fr       */
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
	sp.addNumber(100);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	Span res = Span(10000);
 int		arr[5];
	for(int i = 0; i < 2000; i++)
	{
		arr[0] = rand() % 5000 + 1000;
		arr[1] = rand() % 5000 + 1000;
		arr[2] = rand() % 5000 + 1000;
		arr[3] = rand() % 5000 + 1000;
		arr[4] = rand() % 5000 + 1000;
		res.addNumber(arr);
	}
	std::cout << res.getCount() << std::endl;
	std::cout << res.shortestSpan() << std::endl;
	std::cout << res.longestSpan() << std::endl;


}
