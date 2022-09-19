/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 10:04:37 by oabdelha          #+#    #+#             */
/*   Updated: 2022/07/23 09:45:58 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void Contact::print_column(std::string str)
{
    if (str.length() <= 10)
        std::cout << std::right << std::setw(10) << str;
    else
    {
        str =  str.substr(0,9) + ".";
        std::cout << std::right << std::setw(10) << str;
    }
}

void Contact::print_info(int index)
{
    std::cout << "|";
    print_column(std::to_string(index));
    std::cout << "|";
    print_column(FirstName);
    std::cout << "|";
    print_column(LastName);
    std::cout << "|";
    print_column(NickName);
    std::cout << "|";
    std::cout << std::endl;
}

void    Contact::SetInformation(void)
{  
    std::cout << "First Name : ";
    std::getline(std::cin, FirstName);
    if (std::cin.eof())
        exit(1);
    std::cout << "Last Name : ";
    std::getline(std::cin, LastName);
    if (std::cin.eof())
        exit(1);
    std::cout << "Nick Name : ";
    std::getline(std::cin, NickName);
    if (std::cin.eof())
        exit(1);
    std::cout << "Phone Number : ";
    std::getline(std::cin, PhoneNumber);
    if (std::cin.eof())
        exit(1);
    std::cout << "Darkest Secret : ";
    std::getline(std::cin, DarkestSecret);
    if (std::cin.eof())
        exit(1);
}

void    Contact::Display(void)
{
    std::cout << "First Name : " << FirstName << std::endl;
    std::cout << "Last Name : " << LastName << std::endl;
    std::cout << "Nick Name : " << NickName << std::endl;
    std::cout << "Phone Number : " << PhoneNumber << std::endl;
    std::cout << "Darkest Secret : " << DarkestSecret << std::endl;
}