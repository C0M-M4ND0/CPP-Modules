/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 10:47:18 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/15 17:10:45 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
protected:
    std::string     name;
    int    hitPoints;
    int    energyPoints;
    int    attackDamage;
public:
    ClapTrap();
    ClapTrap(std::string);
    ClapTrap &operator=(ClapTrap&);
    
    //setters
    void    setName(std::string);
    void    setHitPoints(int);
    void    setEnergyPoints(int);
    void    setAttackDamage(int);
    
    //getters
    std::string         getName(void);
        int    getHitPoints(void);
        int    getEnergyPoints(void);
        int    getAttackDamage(void);
    
    void attack(const std::string&);
    void takeDamage(unsigned int);
    void beRepaired(unsigned int);
    ~ClapTrap();
};


#endif