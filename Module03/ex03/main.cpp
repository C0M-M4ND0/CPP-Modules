/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 10:47:14 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/15 17:10:58 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap a("omar");
    std::cout << "name: " << a.DiamondTrap::getName() << std::endl;
    std::cout << "clap name: " << a.ClapTrap::getName() << std::endl;
    std::cout << "hitpoints: " << a.getHitPoints() << std::endl;
    std::cout << "energyPoints: " << a.getEnergyPoints() << std::endl;
    std::cout << "attackDamage: " << a.getAttackDamage() << std::endl;
    a.takeDamage(3);
    DiamondTrap b(a);
    std::cout << "hitpoints: " << b.getHitPoints() << std::endl;
    std::cout << "energyPoints: " << b.getEnergyPoints() << std::endl;
    std::cout << "attackDamage: " << b.getAttackDamage() << std::endl;
    b.takeDamage(3);
    DiamondTrap c;
    c = b;
    b.takeDamage(3);

    DiamondTrap d("crap");
    d.attack("tag");
    d.takeDamage(4);
    d.beRepaired(10);
    d.highFivesGuys();
    d.guardGate();
    d.whoAmI();
    return (EXIT_SUCCESS);
}   