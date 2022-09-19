/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AnimalABC.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:05:03 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/09 13:30:39 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AnimalABC.hpp"

/*---------------------------------AnimalABC------------------------------------*/
AnimalABC::AnimalABC()
{
    std::cout << "AnimalABC's Constructor Called" << std::endl;
    type = "\0";
}

AnimalABC::AnimalABC(const AnimalABC &object)
{
    std::cout << "AnimalABC's Copy Constructor Called" << std::endl;
    *this = object;
}

AnimalABC &AnimalABC::operator=(const AnimalABC &object)
{
    std::cout << "AnimalABC's assignment operator called" << std::endl;
    AnimalABC::type = object.type;
    return (*this);
}

std::string AnimalABC::getType(void) const
{
    return (type);
}

// void    AnimalABC::makeSound(void) const
// {
//     std::cout << "No sound" << std::endl;
// }

AnimalABC::~AnimalABC()
{
    std::cout << "AnimalABC's Destructor Called" << std::endl;
}

