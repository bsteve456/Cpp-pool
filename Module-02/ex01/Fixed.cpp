/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 18:26:47 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/03 23:22:04 by stbaleba         ###   ########.fr       */
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

Fixed::Fixed(int const n)
{
	std::cout << "Int constructor called\n";
	fp_value = n * (1 << bits);
}

Fixed::Fixed(float const f)
{
	std::cout << "Float constructor called\n";
	fp_value = (f) * (1 << bits);
}

float Fixed::toFloat(void) const
{
	return ((float)fp_value / (float) (1 << bits));
}

int Fixed::toInt(void) const
{
	return (fp_value / (int) (1 << bits));
}

std::ostream& operator<<(std::ostream& os, const Fixed &f)
{
	os << f.toFloat();
	return (os);
}

int main( void ) {
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );

	a = Fixed( 1234.4321f );

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return 0;
}
