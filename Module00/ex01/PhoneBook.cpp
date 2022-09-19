/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:52:21 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/01 18:16:19 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    index = 0; 
    ContactNumber = 0;
}

void    PhoneBook::Add(int idx)
{
    if (ContactNumber < 8)
        ContactNumber++;
    index = idx;
    Contacts[index].SetInformation();
    std::cout << "     \033[0;32mContact added Successfully\033[0m" << std::endl;
}

void    PhoneBook::Display(int idx)
{
    Contacts[idx].Display();
}

void    PhoneBook::Header(void)
{
    std::cout << ".___________________________________________." << std::endl;
    std::cout << "|" << std::setw(44) << "|" << std::endl;
    std::cout << "|             \033[1;32mAwesome PhoneBook\033[0m             |" << std::endl;
    std::cout << "|" << std::setw(44) << "|" << std::endl;
    std::cout << "|-------------------------------------------|" << std::endl;
    std::cout << "|";
    std::cout << std::right << std::setw(10) << "Index";
    std::cout << "|";
    std::cout << std::right << std::setw(10) << "First Name";
    std::cout << "|";
    std::cout << std::right << std::setw(10) << "Last Name";
    std::cout << "|";
    std::cout << std::right << std::setw(10) << "Nick Name";
    std::cout << "|";
    std::cout << std::endl;
    for (int i = 0; i < ContactNumber;i++)
        Contacts[i].print_info(i);
}


void    PhoneBook::Search(void)
{
    int idx;
    std::string input;
    
    Header();
    std::cout << "Please Enter Which index of Contact you want to Display it ... (0 -> 7) ";
    std::getline(std::cin, input);
    std::stringstream (input) >> idx;
    if ((idx < 0 || idx > 7 ) || (idx >= ContactNumber || IsNumber(input)))
        std::cout << "\033[0;31mWrong input ... !\033[0m" << std::endl;
    else
        Display(idx);
}