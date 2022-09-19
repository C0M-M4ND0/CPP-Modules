/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 09:47:10 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/19 18:12:18 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain's Constructor called" << std::endl;
}

Brain::Brain(const Brain &object)
{
    *this = object;
}

Brain &Brain::operator=(const Brain &object)
{
    if (this == &object)
        return (*this);
    for (int i = 0; i < 100; i++)
        this->ideas[i] = object.ideas[i];
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain's destructor called" << std::endl;
}