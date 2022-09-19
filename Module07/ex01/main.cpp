/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:42:48 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/26 15:44:16 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    int intArray[5] = {1,5,4,3,8};
    char charArray[6] = {'a','b','c','d','e','f'};
    iter(intArray, 5, print);
    iter(charArray, 6, print);
    return (EXIT_SUCCESS);
}