/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 13:46:12 by stbaleba          #+#    #+#             */
/*   Updated: 2021/01/14 14:58:38 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <stdlib.h>
# include <time.h>

class Span
{
	private:
		unsigned int N;
		unsigned int count;
		int *arr;
	public:
		class OutOfLimits : std::exception
		{
			public:
				const char * what() const throw();
		};
		class NotEnoughNumbers : std::exception
		{
			public:
				const char * what() const throw();
		};

		Span(void);
		Span(unsigned int n);
		Span(const Span &S);
		Span & operator = (const Span &S);
		~Span(void);
		void addNumber(int n);
		void addNumber(int temparr[5]);
		int	shortestSpan(void) const;
		int	longestSpan(void) const;
		unsigned int getN(void) const;
		unsigned int getCount(void) const;
		int			getElem(int i) const;
};


#endif
