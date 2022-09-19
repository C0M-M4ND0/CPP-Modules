/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 16:08:14 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/29 11:07:05 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
private:
    /*data*/
public:
    MutantStack(/* args */){return ;}
    MutantStack(const MutantStack &obj){*this = obj;}
    MutantStack &operator=(const MutantStack &rhs){(void)rhs; return (*this);}
    ~MutantStack(){return ;}
    typedef typename std::stack<T>::container_type::iterator iterator;
    
    iterator    begin(void){return (this->c.begin());}
    iterator    end(void){return (this->c.end());}
};

#endif