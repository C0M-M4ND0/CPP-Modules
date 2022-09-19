/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 10:05:20 by oabdelha          #+#    #+#             */
/*   Updated: 2022/07/23 09:42:55 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
    std::string command;
    PhoneBook   contact;
    int         idx;
    
    idx = 0;
    while (404)
    {
        std::cout << "\033[1;34mPhoneBook >> \033[0m";
        if (!std::getline(std::cin, command))
            break;
        if (!command.compare("EXIT"))
            exit(EXIT_SUCCESS);
        else if (!command.compare("ADD"))
        {
            idx %= 8;
            contact.Add(idx);
            idx++;
        }
        else if (!command.compare("SEARCH"))
        {
            contact.Search();
        }
    }
    return (0);
}