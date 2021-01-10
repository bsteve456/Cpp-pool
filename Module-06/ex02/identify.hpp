/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 11:39:50 by stbaleba          #+#    #+#             */
/*   Updated: 2021/01/10 11:50:19 by stbaleba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IDENTIFY_HPP
# define IDENTIFY_HPP

# include <iostream>
# include <exception>

class Base
{
	public:
		virtual ~Base();
};

class A : public Base
{};

class B : public Base
{};

class C : public Base
{};

#endif
