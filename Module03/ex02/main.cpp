/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 10:47:14 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/06 10:30:41 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    FragTrap objOne;
    
    std::cout << "Name : " << objOne.getName() << std::endl;
    std::cout << "HitPoints : " << objOne.getHitPoints() << std::endl;
    std::cout << "EnergyPoints : " << objOne.getEnergyPoints() << std::endl;
    std::cout << "AttackDamage : " << objOne.getAttackDamage() << std::endl;
    objOne.takeDamage(1);
    FragTrap objTwo(objOne);
    objTwo.takeDamage(2);
    FragTrap objThree;
    objThree = objTwo;
    objTwo.takeDamage(3);
    FragTrap objFour("crap");
    objFour.attack("SomeOne");
    objFour.takeDamage(4);
    objFour.beRepaired(10);
    objFour.highFivesGuys();
    return (EXIT_SUCCESS);
}   