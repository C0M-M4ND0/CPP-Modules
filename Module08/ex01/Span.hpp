/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 11:30:05 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/27 15:46:26 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>

class Span
{
private:
    unsigned int N;
    std::vector<int> span;
public:
    Span(/* args */);
    Span(unsigned int);
    Span(const Span&);
    Span &operator=(const Span&);
    void    addNumber(int);
    void    addManyNumbers(std::vector<int>::iterator, std::vector<int>::iterator);
    int     shortestSpan(void);
    int     longestSpan(void);
    class Error : public std::exception
    {
        public:
            const char *what() const throw();
    };
    ~Span();
};

#endif