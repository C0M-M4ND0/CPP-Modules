/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:05:03 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/09 09:54:39 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*---------------------------------ANIMAL------------------------------------*/
Animal::Animal()
{
    std::cout << "Animal's Constructor Called" << std::endl;
    type = "\0";
}

Animal::Animal(const Animal &object)
{
    std::cout << "Animal's Copy Constructor Called" << std::endl;
    *this = object;
}

Animal &Animal::operator=(const Animal &object)
{
    std::cout << "Animal's assignment operator called" << std::endl;
    Animal::type = object.type;
    return (*this);
}

std::string Animal::getType(void) const
{
    return (type);
}

void    Animal::makeSound(void) const
{
    std::cout << "No sound" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal's Destructor Called" << std::endl;
}





