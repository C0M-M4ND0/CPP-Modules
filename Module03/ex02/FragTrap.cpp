/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 09:59:23 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/15 17:08:43 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap's Default Constructor Called" << std::endl;
    setName("Unknown");
    setHitPoints(100);
    setEnergyPoints(100);
    setAttackDamage(30);
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap's Constructor Called" << std::endl;
    setName(name);
    setHitPoints(100);
    setEnergyPoints(100);
    setAttackDamage(30);
}

FragTrap::FragTrap(FragTrap &object)
{
    std::cout << "FragTrap's Copy Constructor Called" << std::endl;
    *this = object;
}

FragTrap &FragTrap::operator=(FragTrap &object)
{
    std::cout << "FragTrap's Copy assignment operator called" << std::endl;
    object.setName(getName());
    object.setHitPoints(getHitPoints());
    object.setEnergyPoints(getEnergyPoints());
    object.setAttackDamage(getAttackDamage());
    return (*this);
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << getName() << " Wants positive High-Fives ..." << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap's Destructor called" << std::endl;
}