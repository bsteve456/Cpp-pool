/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 18:27:34 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/03 22:43:33 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>
class Fixed
{
	private:
		int fp_value;
		static const int bits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &f2);
		Fixed & operator = (const Fixed &F);
		int	getRawBits(void) const;
		void setRawBits( int const raw );
		Fixed(int const n);
		Fixed(float const f);
		float toFloat( void ) const;
		float toInt( void ) const;
};
std::ostream& operator<<(std::ostream& os, const Fixed &f);


#endif
