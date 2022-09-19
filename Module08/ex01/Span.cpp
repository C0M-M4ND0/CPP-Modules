/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 11:30:03 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/27 15:47:47 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(/* args */) : N(0)
{
}

Span::Span(unsigned int n) : N(n)
{
}

Span::Span(const Span &obj)
{
    *this = obj;
}

Span &Span::operator=(const Span &rhs)
{
    if (this == &rhs)
        return (*this);
    N = rhs.N;
    span = rhs.span;
    return (*this);
}
void    Span::addNumber(int number)
{
    if (span.size() >= N)
        throw std::out_of_range("Can't add a new element ... !");
    else
        span.push_back(number);
}

void    Span::addManyNumbers(std::vector<int>::iterator first, std::vector<int>::iterator last)
{
    for (std::vector<int>::iterator it =  first; it < last; it++)
        addNumber(*it);
}
const char *Span::Error::what(void) const throw()
{
    return ("No span can be found ,(no numbers stored,or only one) ... !");
}

int     Span::longestSpan(void)
{
    if (span.size() < 2)
        throw Error();
    return (*std::max_element(span.begin(), span.end()) - *std::min_element(span.begin(), span.end()));
}

int     Span::shortestSpan(void)
{
    if (span.size() < 2)
        throw Error();
    int shortSpan;
    shortSpan = ~(1 << 31);
    std::vector<int> tmp = span;
    std::sort(tmp.begin(), tmp.end());
    std::vector<int>::iterator it;
    for (it = tmp.begin() ; it < tmp.end() - 1;it++)
        if ((*(it+1) - *(it)) < shortSpan)
            shortSpan = *(it+1) - *(it);
    return (shortSpan);
}

Span::~Span()
{
}
