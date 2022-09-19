/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:05:11 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/19 19:08:37 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
    const AnimalABC* j = new Dog();
    const AnimalABC* i = new Cat();
    delete j;//should not create a leak
    delete i;
    return (EXIT_SUCCESS);
}