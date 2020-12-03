/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 18:26:47 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/03 19:37:13 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	fp_value = 0;
}

Fixed::~Fixed()
{
	std::cout << "Deconstructor called\n";
}

Fixed::Fixed(const Fixed &f2)
{
	std::cout << "Copy constructor called\n";
	fp_value = f2.fp_value;
}

Fixed & Fixed::operator = (const Fixed &F)
{
	std::cout << "Assignation operator called\n";
	if (this != &F)
		fp_value = F.fp_value;
	return *this;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";

	return (fp_value);
}

void Fixed::setRawBits( int const raw)
{
	fp_value = raw;
}

int main( void ) {
	Fixed a;
	Fixed b( a );
	Fixed c;

	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	return 0;
}
