/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 08:04:11 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/01 08:04:14 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    fixedPointValue = 0;
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    this->fixedPointValue = (value << Fixed::fractionalBits);
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    this->fixedPointValue = roundf(value * (1 << Fixed::fractionalBits));
}

Fixed::Fixed(const Fixed &object)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixedPointValue = object.fixedPointValue;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed& object)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixedPointValue = object.fixedPointValue;
    return (*this);
}

int    Fixed::toInt(void) const
{
    return ((int)this->fixedPointValue >> Fixed::fractionalBits);
}

float   Fixed::toFloat(void) const
{
    return ((float)this->fixedPointValue / (1 << Fixed::fractionalBits));  
}

std::ostream&	operator<<(std::ostream &output, const Fixed &object)
{
	output << object.toFloat();
	return (output);
}