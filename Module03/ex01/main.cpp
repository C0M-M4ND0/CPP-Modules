/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 10:47:14 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/06 09:56:08 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap objOne;
    
    std::cout << "Name : " << objOne.getName() << std::endl;
    std::cout << "HitPoints : " << objOne.getHitPoints() << std::endl;
    std::cout << "EnergyPoints : " << objOne.getEnergyPoints() << std::endl;
    std::cout << "AttackDamage : " << objOne.getAttackDamage() << std::endl;
    objOne.takeDamage(1);
    ScavTrap objTwo(objOne);
    objTwo.takeDamage(2);
    ScavTrap objThree;
    objThree = objTwo;
    objTwo.takeDamage(3);
    ScavTrap objFour("crap");
    objFour.attack("SomeOne");
    objFour.takeDamage(4);
    objFour.beRepaired(10);
    objFour.guardGate();
    return (EXIT_SUCCESS);
}   