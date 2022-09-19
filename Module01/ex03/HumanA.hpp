/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 09:10:57 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/03 14:51:17 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
private:
    std::string name;
    Weapon      &weapon_type;
public:
    HumanA(std::string, Weapon&);
    ~HumanA();
    void    attack(void);
    void    setName(std::string);
};

#endif