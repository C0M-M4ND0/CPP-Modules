/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 12:51:10 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/04 13:05:09 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
    std::cout << "\033[1;32mThe Zombie is back  from death ... \033[0m" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << "The Zombie " << "\033[0;31m" << name << "\033[0m" << " Has Die ...." << std::endl;
}

void    Zombie::set_name(std::string name_)
{
    name = name_;
}

void    Zombie::announce(void)
{
    std::cout << "\033[0;31m" << name << "\033[0m" << ": BraiiiiiiinnnzzzZ..." << std::endl;    
}
