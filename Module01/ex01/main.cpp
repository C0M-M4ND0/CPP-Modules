/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:51:24 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/04 13:13:10 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{ 
    Zombie *Horde;
    int i;
    int N;

    N = 5;
    i = -1; 
    Horde = zombieHorde(N, "Conan");
    while (++i < N)
        Horde[i].announce();
    delete[] Horde;
    return (0);
}