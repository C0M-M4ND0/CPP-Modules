/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 09:53:07 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/09 09:56:03 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
private:
    
public:
    Cat();
    Cat(const Cat&);
    std::string getType(void)const;
    Cat &operator=(const Cat&);
    void makeSound(void)const;
    ~Cat();
};


#endif