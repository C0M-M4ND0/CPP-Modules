/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 08:42:20 by oabdelha          #+#    #+#             */
/*   Updated: 2022/07/25 13:18:33 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include<limits>
#include <ctime>

int main(int ac, char **av)
{
    if (ac < 2)
        return (std::cout << "Invalid input ...!" << std::endl, 1);
    std::string name[ac - 1];
    int         i;
    int         j;
    
    j = 0;
    i = 1;
    srand((int)time(0));
    while (av[i])
        name[j++] = av[i++];
    randomChump(name[rand() % j]);
    return (0);
}