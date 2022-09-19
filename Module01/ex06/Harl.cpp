/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:27:36 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/06 17:53:16 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(/* args */)
{
}

Harl::~Harl()
{
}

void    Harl::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void    Harl::error()
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level)
{
    std::string  levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*funPTR[4])(void);
	funPTR[0] = &Harl::debug;
	funPTR[1] =	&Harl::info;
	funPTR[2] =	&Harl::warning;
	funPTR[3] =	&Harl::error;
    for (int i = 0; i < 4; i++)
        if (levels[i] == level)
            return ((this->*funPTR[i])());
}

void    Harl::Display(std::string level)
{
    std::string  levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int index;
        
    index = 0;
    while (index < 4)
    {
        if (level == levels[index])
            break;
        index++;
    }
    switch (index)
        {
        case 0:
            while (index < 4)
                complain(levels[index++]);
            break;
        case 1:
            while (index < 4)
                complain(levels[index++]);
            break;
        case 2:
            while (index < 4)
                complain(levels[index++]);
            break;
        case 3:
            while (index < 4)
                complain(levels[index++]);
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
        }
}