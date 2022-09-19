/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 09:53:07 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/09 13:24:32 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AnimalABC.hpp"
#include "Brain.hpp"

class Cat : public AnimalABC
{
private:
    Brain *brain;
public:
    Cat();
    Cat(const Cat&);
    std::string getType(void)const;
    Cat &operator=(const Cat&);
    void makeSound(void)const;
    ~Cat();
};


#endif