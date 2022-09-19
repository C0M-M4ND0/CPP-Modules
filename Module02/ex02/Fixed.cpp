/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 17:58:12 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/01 16:53:42 by oabdelha         ###   ########.fr       */
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

Fixed   &Fixed::operator++()
{
    ++fixedPointValue;
    return (*this);
}

Fixed   &Fixed::operator--()
{
    fixedPointValue++;
    return (*this);
}

Fixed   Fixed::operator++(int)
{
    Fixed   tempObject(*this);
    
    this->operator++();
    return (tempObject);
}

Fixed   Fixed::operator--(int)
{
    Fixed   tempObject(*this);

    tempObject.operator--();
    return (tempObject);
} 

Fixed   Fixed::operator+(const Fixed &object) const
{
    return (this->toFloat() + object.toFloat());
}

Fixed   Fixed::operator*(const Fixed &object) const
{
    return (this->toFloat() * object.toFloat());
}

Fixed   Fixed::operator-(const Fixed &object) const
{
    return (this->toFloat() - object.toFloat());
}

Fixed   Fixed::operator/(const Fixed &object) const
{
    return (this->toFloat() / object.toFloat());
}

bool    Fixed::operator>(const Fixed &object) const
{
    if (this->fixedPointValue > object.fixedPointValue)
        return (true);
    return (false);
}

bool    Fixed::operator<(const Fixed &object) const
{
    if (this->fixedPointValue < object.fixedPointValue)
        return (true);
    return (false);
}

bool    Fixed::operator>=(const Fixed &object) const
{
    if (this->fixedPointValue >= object.fixedPointValue)
        return (true);
    return (false);
}

bool    Fixed::operator<=(const Fixed &object) const
{
    if (this->fixedPointValue <= object.fixedPointValue)
        return (true);
    return (false);
}

bool    Fixed::operator==(const Fixed &object) const
{
    if (this->fixedPointValue == object.fixedPointValue)
        return (true);
    return (false);
}

bool    Fixed::operator!=(const Fixed &object) const
{
    if (this->fixedPointValue != object.fixedPointValue)
        return (true);
    return (false);
}

Fixed &Fixed::min(Fixed &objOne, Fixed &objTwo)
{
    if (objOne < objTwo)
        return (objOne);
    return (objTwo);
}

const Fixed &Fixed::min(const Fixed &objOne, const Fixed &objTwo)
{
    if (objOne < objTwo)
        return (objOne);
    return (objTwo);
}

Fixed &Fixed::max(Fixed &objOne, Fixed &objTwo)
{
    if (objOne > objTwo)
        return (objOne);
    return (objTwo);
}

const Fixed &Fixed::max(const Fixed &objOne, const Fixed &objTwo)
{
    if (objOne > objTwo)
        return (objOne);
    return (objTwo);
}