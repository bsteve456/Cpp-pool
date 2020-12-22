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
	this->fp_value = 0;
}

Fixed::~Fixed()
{
	std::cout << "Deconstructor called\n";
}

Fixed::Fixed(const Fixed &f2)
{
	std::cout << "Copy constructor called\n";
	*this = f2;
}

Fixed & Fixed::operator = (const Fixed &F)
{
	std::cout << "Assignation operator called\n";
	if (this != &F)
		this->fp_value = F.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void) const
{
	return (this->fp_value);
}

void Fixed::setRawBits( int const raw)
{
	this->fp_value = raw;
}

Fixed::Fixed(int const n)
{
	std::cout << "Int constructor called\n";
	this->fp_value = n * (1 << this->bits);
}

Fixed::Fixed(float const f)
{
	std::cout << "Float constructor called\n";
	this->fp_value = roundf((f) * (1 << this->bits));
}

float Fixed::toFloat(void) const
{
	return ((float)(this->fp_value) / (float) (1 << this->bits));
}

int Fixed::toInt(void) const
{
	return (this->fp_value / (int) (1 << this->bits));
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
