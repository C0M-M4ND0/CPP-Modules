/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 10:08:55 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/27 11:27:22 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
    std::vector<int> vec;
    for (int i(0); i < 10; i++)
        vec.push_back(i + 10);
    std::list<int> lis;
    for (int i(0); i < 10; i++)
        lis.push_back(i);
    std::deque<int> de;
    for (int i(0); i < 10; i++)
    {
        std::srand(std::time(NULL));
        de.push_back(std::rand() % 10);
    }
    
    try{
        std::cout << *easyfind(vec, 15) << std::endl;
        std::cout << *easyfind(lis, 05) << std::endl;
        std::cout << *easyfind(de, 4) << std::endl;
    }
    catch(std::out_of_range e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (EXIT_SUCCESS);
}