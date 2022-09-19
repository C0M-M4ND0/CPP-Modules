/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 09:10:54 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/06 17:51:48 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon_type) : name(name), weapon_type(weapon_type)
{
}

HumanA::~HumanA()
{
}

void    HumanA::attack(void)
{
    std::cout << "\033[1;32m" << name << "\033[0m" << " attacks with their " << "\033[0;31m" << weapon_type.getType() << "\033[0m"<< std::endl;
}

void    HumanA::setName(std::string name_)
{
    name = name_;
}
