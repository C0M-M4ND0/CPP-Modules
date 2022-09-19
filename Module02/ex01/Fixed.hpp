/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 17:58:10 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/01 08:04:45 by oabdelha         ###   ########.fr       */
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
    int                 fixedPointValue;
    static const int    fractionalBits = 8; 
public:
    Fixed();
    Fixed(const int);
    Fixed(const float);
    Fixed(const Fixed &);
    Fixed   &operator = (const Fixed&);
    float   toFloat( void ) const;
    int     toInt( void ) const;
    ~Fixed();
};

std::ostream&	operator<<(std::ostream &, const Fixed &);

#endif