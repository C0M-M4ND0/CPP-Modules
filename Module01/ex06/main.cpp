/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:27:31 by oabdelha          #+#    #+#             */
/*   Updated: 2022/07/27 17:17:03 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        Harl    harl;

        harl.Display(av[1]);
        return (EXIT_SUCCESS);
    }
    else 
        std::cout << "Invalid input ... !" << std::endl;
    return (EXIT_FAILURE);
}