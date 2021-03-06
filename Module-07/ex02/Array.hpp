/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 13:01:27 by stbaleba          #+#    #+#             */
/*   Updated: 2021/01/13 17:21:00 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template < typename T >
class Array
{
	public:
		class OutOfLimits : std::exception
		{
			public:
				const char * what() const throw() {
					return "Out of Limits! ";
				}
		};
		Array()
		{
			this->err = 0;
			this->length = 0;
			this->arr = new T[0];
		}
		Array(unsigned int n)
		{
			this->err = 0;
			this->length = n;
			this->arr = new T[n];
			for (unsigned int i = 0; i < n; i++)
				this->arr[i] = 0;
		}
		Array<T>(Array<T> const &t)
		{
			this->err = 0;
			this->arr = 0;
			*this = t;
		}
		Array<T> & operator = (Array<T> const &t)
		{
			this->err = 0;
			if (this != &t )
			{
				delete [] this->arr;
				this->length = t.size();
				this->arr = new T[this->length];
				for (unsigned int i = 0; i < t.size(); i++)
					this->arr[i] = t[i];
			}
			return (*this);
		}
		T &  operator [] (unsigned int n)
		{
			try
			{
				if (n >= this->length)
					throw OutOfLimits();
				return (this->arr[n]);
			}
			catch (OutOfLimits &e)
			{
				std::cerr << "Error : " << e.what();
				return (err);
			}
		}
		const T &  operator [] (unsigned int n) const
		{
			try
			{
				if (n >= this->length)
					throw OutOfLimits();
				return (this->arr[n]);
			}
			catch (OutOfLimits &e)
			{
				std::cerr << "Error : " << e.what();
				return (err);
			}
		}
		void	setArray(unsigned int elem, T val)
		{
			if (elem < this->length)
				this->arr[elem] = val;
		}
		unsigned int size() const
		{
			return (this->length);
		}
		~Array() {
			if(this->arr != 0)
				delete [] this->arr;
		}
	private:
		T *arr;
		T err;
		unsigned int length;
};
#endif
