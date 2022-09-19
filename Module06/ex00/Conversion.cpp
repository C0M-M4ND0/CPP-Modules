/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 10:04:16 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/25 20:05:22 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion(){
}

Conversion::Conversion(const Conversion &object){
    *this = object;
}

Conversion &Conversion::operator=(const Conversion&object){
    _char = object._char;
    _int = object._int;
    _double = object._double;
    _float = object._float;
    return (*this);    
}
Conversion::Conversion(std::string input){
    impo = "Impossible";
    if (input.length() == 1 && !isdigit(input[0]))
    {
        _char = input[0];
        std::cout << "char : '" << _char << "'"<< std::endl;
        std::cout << "int : " << static_cast<int>(_char) << std::endl;
        std::cout << std::fixed;
        std::cout << std::setprecision(2);
        std::cout << "float : " << static_cast<float>(_char) << "f" << std::endl;
        std::cout << "double : " << static_cast<double>(_char) << std::endl;
        return;
    }
    if (input.back() == 'f' && input != "inf" && input != "-inf")
        input.erase(input.end() - 1,input.end());
    std::stringstream ss(input);
    if (!(ss >> _double))
    {
        std::cout << "char : " << impo << std::endl;
        std::cout << "int : " << impo << std::endl;
        std::cout << "float : " << impo << std::endl;
        std::cout << "double : " << impo << std::endl;
        return;
    }
    display();
}

void    Conversion::display(void){
    if (_double != _double)
    {
        std::cout << "char: " << impo << std::endl;
        std::cout << "int: " << impo << std::endl;
    }
    else
    {
        if (_double < 32 || _double > 127)
            std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: '" << static_cast<char>(_double) << "'"<< std::endl;
        if (_double > INT_MAX  || _double < INT_MIN )
            std::cout << "int: Impossible" << std::endl;
        else
            std::cout << "int: " << static_cast<int>(_double) << std::endl;
    }
    std::cout << std::fixed;
    std::cout << std::setprecision(1);
    std::cout << "float: " << static_cast<float>(_double) << "f" << std::endl;
    std::cout << "double: " << _double <<std::endl;
}

Conversion::~Conversion(){};