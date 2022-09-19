/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 15:21:22 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/19 15:34:36 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"

/*---------------------------------WrongAnimal------------------------------------*/
WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal's Constructor Called" << std::endl;
    type = "\0";
}

WrongAnimal::WrongAnimal(const WrongAnimal &object)
{
    std::cout << "WrongAnimal's Copy Constructor Called" << std::endl;
    *this = object;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &object)
{
    std::cout << "WrongAnimal's assignment operator called" << std::endl;
    WrongAnimal::type = object.type;
    return (*this);
}

std::string WrongAnimal::getType(void) const
{
    return (type);
}

void    WrongAnimal::makeSound(void) const
{
    std::cout << "No sound" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal's Destructor Called" << std::endl;
}





