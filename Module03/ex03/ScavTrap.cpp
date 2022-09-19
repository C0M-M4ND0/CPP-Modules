/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 10:50:30 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/15 17:18:54 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap's Default Constructor Called" << std::endl;
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
    std::cout << "ScavTrap's Copy assignment operator called" << std::endl;
    object.setName(getName());
    object.setHitPoints(getHitPoints());
    object.setAttackDamage(getAttackDamage());
    object.setEnergyPoints(getEnergyPoints());
    return (*this);
}

void    ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap's Destructor called" << std::endl;
}
