/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 11:08:53 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/15 17:15:17 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), name("Unknown")
{
    std::cout << "DiamondTrap's Default Constructor Called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), name(name)
{
    energyPoints = 50;
    std::cout << "DiamondTrap's Constructor  Called" << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
	this->ScavTrap::attack(target);
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap &object)
{
    setName(object.getName());
    this->ClapTrap::setName(object.getName());
    setHitPoints(object.getHitPoints());
    setEnergyPoints(object.getEnergyPoints());
    setAttackDamage(object.getAttackDamage());
    return (*this);
}

DiamondTrap::DiamondTrap(DiamondTrap& object)
{
    std::cout << "DiamondTrap's copy constructor called" << std::endl;
    *this = object;
}

void    DiamondTrap::whoAmI()
{
    std::cout << "My name is " << DiamondTrap::name << " 😎" << std::endl;
}

std::string DiamondTrap::getName()
{
    return (name);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap's Destructor Called" << std::endl;
}
