/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 09:36:34 by oabdelha          #+#    #+#             */
/*   Updated: 2022/07/23 09:37:19 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int IsNumber(std::string string)
{
    for (int i = 0; i < (int)string.length(); i++)
        if (!isdigit(string[i]))
            return (1);
    return (0);
}