/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 09:11:15 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/06 17:51:31 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type_)
{
    type = type_;
}

Weapon::~Weapon()
{
}

const std::string &Weapon::getType(void)
{
    return (type);
}

void    Weapon::setType(std::string type_)
{
    type = type_;
}