/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 15:21:40 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/19 15:31:20 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/*---------------------------------WrongCat------------------------------------*/
WrongCat::WrongCat()
{
    std::cout << "WrongCat's Constructor Called" << std::endl;
    WrongCat::type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &object)
{
    std::cout << "WrongCat's Copy Constructor Called" << std::endl;
    *this = object;
}

WrongCat &WrongCat::operator=(const WrongCat &object)
{
    std::cout << "WrongCat's assignment operator called" << std::endl;
    WrongCat::type = object.type;
    return (*this);
}

std::string WrongCat::getType(void) const
{
    return (WrongCat::type);
}

void    WrongCat::makeSound(void) const
{
    std::cout << "meow meow" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat's Destructor Called" << std::endl;
}