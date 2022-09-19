/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 18:24:01 by oabdelha          #+#    #+#             */
/*   Updated: 2022/07/26 18:24:05 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP
#include <string>
#include <iostream>
#include <fstream>

class Replace
{
private:
    std::string filename;
    std::string     s1;
    std::string     s2;
public:
    int replace();
    Replace(std::string, std::string, std::string);
    ~Replace();
};

#endif