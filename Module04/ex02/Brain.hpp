/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 09:47:14 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/09 13:18:25 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include "AnimalABC.hpp"

class Brain
{
private:
    std::string ideas[100];
public:
    Brain();
    Brain(const Brain&);
    Brain &operator=(const Brain&);
    ~Brain();
};


#endif