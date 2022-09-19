/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 15:30:10 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/15 15:45:59 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data* ptr){
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw){
    return (reinterpret_cast<Data*>(raw));
}