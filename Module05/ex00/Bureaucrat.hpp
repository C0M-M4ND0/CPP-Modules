/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 08:08:33 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/10 12:06:01 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat
{
private:
    const std::string   name;
    int                 grade;
public:
    Bureaucrat(/* args */);
    Bureaucrat(std::string, int);
    Bureaucrat(const Bureaucrat&);
    Bureaucrat &operator=(const Bureaucrat&);
    std::string     GetName(void) const;
    int             GetGrade(void) const;
    void            IncrementGrade(void);
    void            DecrementGrade(void);
    class GradeTooHighException : public std::exception
    {
        public:
            const char *what(void) const throw();
    };
    
    class GradeTooLowException : public std::exception
    {
        public:
            const char *what(void) const throw();
    };
    ~Bureaucrat();
};

std::ostream&	operator<<(std::ostream &, const Bureaucrat &);

#endif