/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AnimalABC.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 11:05:09 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/09 13:30:30 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMALABC_HPP
#define ANIMALABC_HPP
#include <iostream>
#include <string>

class AnimalABC
{
protected:
    std::string type;
public:
    AnimalABC();
    AnimalABC(const AnimalABC&);
    AnimalABC &operator=(const AnimalABC&);
    virtual std::string getType(void)const;
    virtual void makeSound(void)const = 0;
    virtual ~AnimalABC();
};








#endif