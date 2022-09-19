/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 09:17:47 by oabdelha          #+#    #+#             */
/*   Updated: 2022/07/29 16:57:44 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    fixedPointValue = 0;
}

Fixed::Fixed(const Fixed& object)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = object;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator= (const Fixed&  object)
{
    std::cout << "Copy assignment operator called" << std::endl;
    setRawBits(object.getRawBits());
    return (*this);   
}

int     Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (fixedPointValue);
}

void    Fixed::setRawBits( int const raw )
{
    fixedPointValue = raw;
}
