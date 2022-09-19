/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 09:17:45 by oabdelha          #+#    #+#             */
/*   Updated: 2022/07/29 18:07:23 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <string>
#include <iostream>

class Fixed
{
private:
    int                 fixedPointValue;
    static const int    fractionalBits = 8;
public:
    Fixed();
    Fixed(const Fixed&);
    Fixed &operator= (const Fixed&);
    ~Fixed();
    int getRawBits( void ) const;
    void setRawBits( int const raw);
};

#endif 