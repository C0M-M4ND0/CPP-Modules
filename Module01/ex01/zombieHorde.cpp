/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:51:15 by oabdelha          #+#    #+#             */
/*   Updated: 2022/07/25 13:13:59 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name_)
{
    if (N <= 0)
        return (NULL);
    Zombie  *Horde;
    int     i;

    i = -1;
    Horde = new Zombie[N];
    while (++i < N)
        Horde[i].set_name(name_);
    return (Horde);
}