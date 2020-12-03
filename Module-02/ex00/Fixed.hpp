/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 18:27:34 by stbaleba          #+#    #+#             */
/*   Updated: 2020/12/03 19:35:24 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
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
};

#endif
