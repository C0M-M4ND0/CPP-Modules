/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 09:15:14 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/20 12:47:50 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <string>

class Bureaucrat;

class Form
{
private:
    const std::string   name;
    bool                IsSigned;
    const int           gradeToSign;
    const int           gradeToExecute;
public:
    Form();
    Form(const std::string, const int);
    Form(Form const&);
    Form &operator=(Form const&);
    bool        getIsSigned() const;
    std::string getName(void) const;
    int   getGradeToSign(void) const;
    int   getGradeToExecute(void) const;
    void        beSigned(const Bureaucrat&);
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
    ~Form();
};

std::ostream &operator<<(std::ostream &, Form&);
#endif