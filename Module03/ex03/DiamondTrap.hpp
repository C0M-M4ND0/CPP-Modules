/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 11:08:50 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/07 20:25:16 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap , public FragTrap
{
private:
    std::string name;
    using FragTrap::hitPoints;
    using FragTrap::attackDamage;
    using ScavTrap::energyPoints;
public:
    DiamondTrap();
    DiamondTrap(std::string);
    DiamondTrap(DiamondTrap&);
    DiamondTrap &operator=(DiamondTrap&);
    std::string getName();
    void        attack(const std::string&);
    void        whoAmI();
    using FragTrap::getHitPoints;
    using ScavTrap::getEnergyPoints;
    using FragTrap::getAttackDamage;
    using ScavTrap::attack;
    using FragTrap::takeDamage;
    using FragTrap::beRepaired;
    ~DiamondTrap();
};

#endif