/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 13:01:27 by stbaleba          #+#    #+#             */
/*   Updated: 2021/01/12 20:14:25 by stbaleba         ###   ########.fr       */
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
			this->length = 0;
			this->arr = new T[0];
		}
		Array(unsigned int n)
		{
			std::cout << "HERE" << std::endl;
			this->length = n;
			this->arr = new T[n];
			for (unsigned int i = 0; i < n; i++)
				this->arr[i] = 0;
		}
		Array<T>(Array<T> const &t)
		{
			this->arr = 0;
			*this = t;
		}
		Array<T> & operator = (Array<T> const &t)
		{
			std::cout << "HERE2" << std::endl;
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
		T operator [] (unsigned int n) const
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
				return (static_cast<T>(0));
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
		unsigned int length;
};
#endif
