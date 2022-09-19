/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 10:22:19 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/25 17:09:02 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base * generate(void){
    int     random;
    Base    *base;
    
    std::srand(std::time(0));
    random = std::rand() % 3;
    switch (random)
    {
    case 0:
        base = new A;
        break;
    case 1:
        base = new B;
        break;
    case 2:
        base = new C;
        break;
    default:
        base = nullptr;
        break;
    }
    return (base);
}

void identify(Base* p){
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl; 
}

void identify(Base& p){
    try{
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        return;
    }
    catch(...){}
    try{
        (void)dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        return;
    }
    catch(...){}
    try
    {
        (void)dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        return;
    }
    catch(...){}
}
int main(void){
    Base *base;
    base = generate();
    identify(*base);
    delete base;
    
    base = generate();
    identify(base);
    delete base;
    return (0);
}