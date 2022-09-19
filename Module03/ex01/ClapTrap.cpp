/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 10:47:21 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/06 09:17:46 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Uknown") , hitPoints(10), energyPoints(10), attackDamage(0)
{   
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name) , hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "Copy consteuctor called" << std::endl;
}

void    ClapTrap::setName(std::string  name)
{
    this->name = name;
}

void    ClapTrap::setHitPoints(int points)
{
    hitPoints = points;
}

void    ClapTrap::setEnergyPoints(int points)
{
    energyPoints = points;
}

void    ClapTrap::setAttackDamage(int attackDamage)
{
    this->attackDamage = attackDamage;
}

std::string    ClapTrap::getName(void)
{
    return (name);
}

int    ClapTrap::getHitPoints(void)
{
    return (hitPoints);
}

int    ClapTrap::getEnergyPoints(void)
{
    return (energyPoints);
}

int    ClapTrap::getAttackDamage(void)
{
    return (attackDamage);
}

ClapTrap &ClapTrap::operator=(ClapTrap &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    name = obj.getName();
    hitPoints = obj.getHitPoints();
    attackDamage = obj.getAttackDamage();
    energyPoints = obj.getEnergyPoints();
    return (*this);
}

void    ClapTrap::attack(const std::string &target)
{
    if (!hitPoints || !energyPoints)
        std::cout << "ClapTrap " << getName() << " can't Do anything !" << std::endl;
    else
    {
        std::cout << "ClapTrap " << getName() << " attacks " << target << " causing " << getAttackDamage() << " points of damage!" << std::endl;
        energyPoints--;
    }
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    hitPoints = ((unsigned int)hitPoints < amount) ? 0 : (hitPoints - amount);
    std::cout << "ClapTrap " << name << " take " << amount << " damage!" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    hitPoints += amount;
    energyPoints--;
    std::cout << "ClapTrap " << name << " was repaired himself , now he's got " << amount << " from Hit points !" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}
