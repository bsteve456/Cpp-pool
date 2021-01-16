/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 13:52:32 by stbaleba          #+#    #+#             */
/*   Updated: 2021/01/16 18:34:24 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(void) : N(0), count(0), arr(0)
{}

Span::Span(unsigned int n) : N(n), count(0)
{
	this->arr = new int[n];
	for(unsigned int i = 0; i < n; i++)
		this->arr[i] = 0;
}

Span::Span(const Span &S)
{
	this->arr = 0;
	*this = S;
}

Span & Span::operator = (const Span &S)
{
	if (this != &S)
	{
		delete [] this->arr;
		this->N = S.getN();
		this->count = S.getCount();
		this->arr = new int[this->N];
		int n1 = 0;
		for (unsigned int n = 0; n < this->N; n++)
		{
			this->arr[n] = S.getElem(n);
			n1++;
		}
	}
	return (*this);
}

unsigned int Span::getN(void) const
{
	return (this->N);
}

unsigned int Span::getCount(void) const
{
	return (this->count);
}

int			Span::getElem(int i) const
{
	return (this->arr[i]);
}

int	*		Span::getArr() const
{
	return this->arr;
}

void		Span::addNumber(int n)
{
	try
	{
		if (this->count >= this->N)
			throw OutOfLimits();
		this->arr[count] = n;
		this->count += 1;
	}
	catch (Span::OutOfLimits &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

const char  * Span::OutOfLimits::what() const throw()
{
	return "Out Of Limits ! ";
}

const char  * Span::NotEnoughNumbers::what() const throw()
{
	return "Not Enough Numbers ! ";
}

int			Span::shortestSpan(void) const
{
	try
	{
		if (this->count < 2)
			throw NotEnoughNumbers();
		return (*std::min_element(this->arr, this->arr + this->N));
	}
	catch (Span::NotEnoughNumbers &e)
	{
		std::cerr << e.what() << std::endl;
		return (-1);
	}
}

int			Span::longestSpan(void) const
{
	try
	{
		if (this->count < 2)
			throw NotEnoughNumbers();
		return (*std::max_element(this->arr, this->arr + this->N));
	}
	catch (Span::NotEnoughNumbers &e)
	{
		std::cerr << e.what() << std::endl;
		return (-1);
	}
}

void		Span::fill()
{
	unsigned int j;
	int n;
	for (unsigned int i = 0; i < this->N; i++)
	{
		j = i + 1;
		n = rand() % (i + 1);
		std::fill(this->begin() + i, this->begin() + j, n);
	}
	this->count = this->N;

}
Span & Span::operator ++()
{
	(this->arr)++;
	return (*this);
}

Span Span::operator++(int n)
{
	Span tmp(*this);
	for(int i = 0; i < n; i++)
		this->operator++();
	return (tmp);
}

int & Span::operator *()
{
	return (*(this->arr));
}

int * Span::begin()
{
	return (this->arr);
}

int * Span::end()
{
	return (this->arr + (this->N - 1));
}

Span::~Span()
{
	delete [] this->arr;
}
