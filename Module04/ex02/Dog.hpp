/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 09:53:14 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/09 13:24:38 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AnimalABC.hpp"
#include "Brain.hpp"

class Dog : public AnimalABC
{
private:
    Brain *brain;
public: 
    Dog();
    Dog(const Dog&);
    std::string getType(void)const;
    Dog &operator=(const Dog&);
    void makeSound(void)const;
    ~Dog();
};

#endif