/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:42:45 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/26 15:41:52 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template<typename T>
void    iter(T array[], size_t size, void(*f)(const T &)){
  for (size_t i = 0; i < size; i++)
    f(array[i]);
}

template<typename T> 
void    print(const T &element){
    std::cout << element << std::endl;
}

#endif