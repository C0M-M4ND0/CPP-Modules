/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 10:09:07 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/27 16:05:53 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <iostream>
#include <iterator>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>

template<typename T>
typename T::iterator easyfind(T first, int tofind)
{
    typename T::iterator it = std::find(first.begin(), first.end(), tofind);
    if (it == first.end())
        throw std::out_of_range("Oooops, Target is not exist ... !");
    return (it);
}

#endif