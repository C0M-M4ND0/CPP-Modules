/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 10:50:30 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/15 17:13:30 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap's Default Constructor Called" << std::endl;
    setName("Unknown");
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(20);
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap's Constructor Called" << std::endl;
    setName(name);
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(20);
}

ScavTrap::ScavTrap(ScavTrap &object)
{
    std::cout << "ScavTrap's Copy Constructor Called" << std::endl;
    *this = object;
}

ScavTrap &ScavTrap::operator=(ScavTrap &object)
{
    std::cout << "ScavTrap's Copy assignment operator Called" << std::endl;
    object.setName(getName());
    object.setHitPoints(getHitPoints());
    object.setAttackDamage(getAttackDamage());
    object.setEnergyPoints(getEnergyPoints());
    return (*this);
}


void    ScavTrap::attack(const std::string &target)
{
    if (!hitPoints || !energyPoints)
        std::cout << "ScavTrap " << getName() << " can't Do anything !" << std::endl;
    else
    {
        std::cout << "ScavTrap " << getName() << " attacks " << target << " causing " << getAttackDamage() << " points of damage!" << std::endl;
        energyPoints--;
    }
}

void    ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap's Destructor Called" << std::endl;
}
