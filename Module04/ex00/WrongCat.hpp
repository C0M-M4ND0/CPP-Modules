/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 15:21:47 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/19 15:31:55 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"


class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    WrongCat(const WrongCat&);
    std::string getType(void)const;
    WrongCat &operator=(const WrongCat&);
    void makeSound(void)const;
    virtual ~WrongCat();
};


#endif