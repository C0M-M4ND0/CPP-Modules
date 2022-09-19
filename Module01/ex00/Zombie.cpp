/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 08:42:41 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/04 12:47:19 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie()
{
    std::cout << "\033[1;32mThe Zombie is back from death ... \033[0m" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "The Zombie " << "\033[0;31m" << name << "\033[0m" << " Has Die ...." << std::endl;
}

void    Zombie::announce()
{
    std::cout << "\033[0;31m" << name << "\033[0m" << ": BraiiiiiiinnnzzzZ..." << std::endl;   
}

void    Zombie::set_name(std::string name_)
{
    name = name_;
}