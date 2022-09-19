/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 09:11:04 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/04 16:53:14 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
private:
    std::string name;
    Weapon      *weapon_type;
public:
    HumanB(std::string);
    ~HumanB();
    void    attack(void);
    void    setName(std::string);
    void    setWeapon(Weapon&);
};

#endif