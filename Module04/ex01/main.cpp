/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:05:11 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/19 19:04:22 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#define NUMBER_OF_ANIMALS 8

int main(void)
{
   	Animal	*animals[NUMBER_OF_ANIMALS];
  
	for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
	{
		if (i < NUMBER_OF_ANIMALS / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout << animals[i]->getType() << std::endl;
	}
	
	for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
		delete animals[i];
	Dog *test = new Dog;
	Dog *test2 = new Dog(*test);
	test2->makeSound();
	delete test;
	delete test2;
    return (EXIT_SUCCESS);
}