/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 13:52:32 by stbaleba          #+#    #+#             */
/*   Updated: 2021/01/14 18:07:00 by stbaleba         ###   ########.fr       */
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

void		Span::addNumber(int temparr[5])
{
	try
	{
		int i = 0;
		while(this->count < this->N && i < 5)
		{
			this->arr[count] = temparr[i];
			this->count += 1;
			i++;
		}
		if (this->count >= this->N && i < 5)
			throw OutOfLimits();
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
	int num = 0;
	int break1 = 0;
	unsigned int i;
	try
	{
		if (this->count < 2)
			throw NotEnoughNumbers();
		for (i = 0; i < this->N; i++)
		{
			break1 = 0;
			num = this->arr[i];
			for (unsigned int j = 0; j < this->N; j++)
			{
				if (num > this->arr[j])
				{
					break1 = 1;
					break;
				}
			}
			if (break1 == 0)
				break;
		}
		return (this->arr[i]);
	}
	catch (Span::NotEnoughNumbers &e)
	{
		std::cerr << e.what() << std::endl;
		return (-1);
	}
}

int			Span::longestSpan(void) const
{
	int num = 0;
	int break1 = 0;
	unsigned int i;

	try
	{
		if (this->count < 2)
			throw NotEnoughNumbers();
		for (i = 0; i < this->N; i++)
		{
			break1 = 0;
			num = this->arr[i];
			for (unsigned int j = 0; j < this->N; j++)
			{
				if (num < this->arr[j])
				{
					break1 = 1;
					break;
				}
			}
			if (break1 == 0)
				break;
		}
		return (this->arr[i]);
	}
	catch (Span::NotEnoughNumbers &e)
	{
		std::cerr << e.what() << std::endl;
		return (-1);
	}
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

Span::~Span()
{
	delete [] this->arr;
}
