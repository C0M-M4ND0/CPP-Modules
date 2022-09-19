/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 09:11:01 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/06 17:51:53 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon_type(nullptr)
{
}

HumanB::~HumanB()
{
}

void    HumanB::attack(void)
{
    std::cout << "\033[1;32m" << name << "\033[0m" << " attacks with their " << "\033[0;31m" << weapon_type->getType() << "\033[0m"<< std::endl;
}

void    HumanB::setName(std::string name_)
{
    name = name_;
}

void    HumanB::setWeapon(Weapon &weapon_type)
{
    this->weapon_type = &weapon_type;
}