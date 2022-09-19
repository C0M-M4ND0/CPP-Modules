/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 11:30:00 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/29 16:39:49 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    {
        Span sp(100000);
        std::vector<int> vec;
        std::srand(std::time(NULL));
        for (int i(0); i < 100000; i++)
            vec.push_back(std::rand());
        sp.addManyNumbers(vec.begin(), vec.end());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    {
        Span sp;
        
        try{
            sp.addNumber(4);
        }
        catch(std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }
        sp = Span(5);
        sp.addNumber(50);
        try{
            std::cout << sp.longestSpan() << std::endl;
        }
        catch(std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }
        try{
            std::cout << sp.shortestSpan() << std::endl;
        }
        catch(std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    return (EXIT_SUCCESS);
}