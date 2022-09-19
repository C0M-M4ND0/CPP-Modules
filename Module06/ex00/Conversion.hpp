/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 10:04:19 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/25 10:40:18 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
#define CONVERSION_HPP
#include <iostream>
#include <string>
#include <limits>
#include <sstream>
#include <cfloat>
#include <iomanip>

class Conversion
{
private:
    char        _char;
    int         _int;
    float       _float;
    double      _double;
    std::string impo;
    void    impossible(void);
    void    display(void);
public:
    Conversion();
    Conversion(std::string);
    Conversion(const Conversion&);
    Conversion &operator=(const Conversion&);
    ~Conversion();
};

#endif


