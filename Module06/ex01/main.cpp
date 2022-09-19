/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 15:21:13 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/25 20:10:42 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main(void)
{
    Data    *ptrOne = new Data;
    Data    *ptrTwo;
    uintptr_t   raw;
    ptrOne->str = "C0MM4ND0";
    raw = serialize(ptrOne);
    ptrTwo = deserialize(raw);
    std::cout << ptrTwo->str << std::endl;
    delete ptrOne;
    return (EXIT_SUCCESS);
}