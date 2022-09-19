/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 10:04:22 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/23 18:32:24 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int main(int ac, char **av)
{
    // std::cout << std::numeric_limits<float>::min();
    // void(av), (void)ac;
    if (ac == 2)
    {
        Conversion convert(av[1]);
        return (EXIT_SUCCESS);
    }
    return (EXIT_FAILURE);
}