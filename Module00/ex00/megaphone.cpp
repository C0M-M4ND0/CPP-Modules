/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 14:27:15 by oabdelha          #+#    #+#             */
/*   Updated: 2022/04/16 14:27:50 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

void    uppercase(char **string)
{
    int i;
    int j;

    i = 0;
    while (string[++i])
    {
        j = -1;
        while (string[i][++j])
            if (islower(string[i][j]))
                string[i][j] = toupper(string[i][j]);
    }
}

int main(int ac, char **av)
{
    int i;

    i = 0;
    if (ac == 1)
        return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 1);
    uppercase(av);
    while (av[++i])
        std::cout << av[i];
    std::cout << std::endl;
    return (0);
}
