/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 17:58:10 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/01 16:52:58 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
private:
    static const int    fractionalBits = 8; 
public:
    Fixed();
    int                 fixedPointValue;
    Fixed(const int);
    Fixed(const float);
    Fixed(const Fixed &);
    Fixed   &operator= (const Fixed&);
    Fixed   &operator++();
    Fixed   &operator--();
    Fixed   operator++(int);
    Fixed   operator--(int);
    Fixed   operator+(const Fixed&) const;
    Fixed   operator*(const Fixed&) const;
    Fixed   operator-(const Fixed&) const;
    Fixed   operator/(const Fixed&) const;
    bool    operator<(const Fixed&) const;
    bool    operator>(const Fixed&) const;
    bool    operator<=(const Fixed&) const;
    bool    operator>=(const Fixed&) const;
    bool    operator==(const Fixed&) const;
    bool    operator!=(const Fixed&) const;
    float   toFloat( void ) const;
    int     toInt( void ) const;
    static Fixed &min(Fixed &, Fixed&);
    static const Fixed &min(const Fixed &, const Fixed&);
    static Fixed &max(Fixed &, Fixed&);
    static const Fixed &max(const Fixed &, const Fixed&);
    ~Fixed();
};

std::ostream&	operator<<(std::ostream &, const Fixed &);

#endif