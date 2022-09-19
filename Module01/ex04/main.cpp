/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 14:17:12 by oabdelha          #+#    #+#             */
/*   Updated: 2022/07/26 18:24:52 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int ac, char **av)
{
    if (ac == 4)
    {
        Replace replace(av[1], av[2], av[3]);
        replace.replace();
    }
    else
        return (std::cout << "Invalid Input ... !", EXIT_FAILURE);
    return (EXIT_SUCCESS);
}