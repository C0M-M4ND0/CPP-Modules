/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 09:53:10 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/19 18:35:07 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*---------------------------------DOG------------------------------------*/
Dog::Dog()
{
    std::cout << "Dog's Constructor Called" << std::endl;
    Dog::type = "Dog";
    brain = new Brain();
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
    type = object.type;
    brain = new Brain(*object.brain);
    return (*this);
}

void    Dog::makeSound(void) const
{
    std::cout << "woof woof" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog's Destructor Called" << std::endl;
    delete brain;
}
