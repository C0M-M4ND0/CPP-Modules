/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 09:53:05 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/19 19:06:44 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*---------------------------------CAT------------------------------------*/
Cat::Cat()
{
    std::cout << "Cat's Constructor Called" << std::endl;
    Cat::type = "Cat";
    brain = new Brain();
}

Cat::Cat(const Cat &object)
{
    std::cout << "Cat's Copy Constructor Called" << std::endl;
    *this = object;
}

Cat &Cat::operator=(const Cat &object)
{
    std::cout << "Cat's assignment operator called" << std::endl;
    type = object.type;
    brain = new Brain(*object.brain);
    return (*this);
}

std::string Cat::getType(void) const
{
    return (Cat::type);
}

void    Cat::makeSound(void) const
{
    std::cout << "meow meow" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat's Destructor Called" << std::endl;
    delete brain;
}