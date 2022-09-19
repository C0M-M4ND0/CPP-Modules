/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 10:44:34 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/26 15:28:53 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void    swap(T bitand p1, T bitand p2)
{
    T temp;
    
    temp = p1;
    p1 = p2;
    p2 = temp;
}

template <typename T>
T       min(T p1, T p2)
{
    return ((p1 < p2) ? p1 : p2);
}

template <typename T>
T       max(T p1, T p2)
{
    return ((p1 > p2) ? p1 : p2);
}

#endif