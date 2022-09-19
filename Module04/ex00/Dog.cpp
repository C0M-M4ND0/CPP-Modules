/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 09:53:10 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/18 16:38:36 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*---------------------------------DOG------------------------------------*/
Dog::Dog()
{
    std::cout << "Dog's Constructor Called" << std::endl;
    Dog::type = "Dog";
}

Dog::Dog(const Dog &object)
{
    std::cout << "Dog's Copy Constructor Called" << std::endl;
    *this = object;
}

std::string Dog::getType(void) const
{
    return (Dog::type);
}

Dog &Dog::operator=(const Dog &object)
{
    std::cout << "Dog's assignment operator called" << std::endl;
    Dog::type = object.type;
    return (*this);
}

void    Dog::makeSound(void) const
{
    std::cout << "woof woof" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog's Destructor Called" << std::endl;
}
