/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 09:16:22 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/20 12:49:30 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form() : name("Uknown"), gradeToSign(1) , gradeToExecute(1)
{
    std::cout << "Form's Default Constructor Called" << std::endl;
    IsSigned = false;
}

Form::Form(const std::string name, const int grade) : name(name), gradeToSign(grade), gradeToExecute(grade)
{
    std::cout << "Form's Constructor Called" << std::endl;
    IsSigned = false;
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
}

Form::Form(const Form &object) : name(object.getName()), gradeToSign(object.getGradeToSign()), gradeToExecute(object.getGradeToExecute())
{
    IsSigned = object.getIsSigned();
}

Form &Form::operator=(Form const &object)
{
    IsSigned = object.getIsSigned();
    return (*this);
}

std::string Form::getName(void) const
{
    return (name);
}

int Form::getGradeToSign(void) const 
{
    return (gradeToSign);
}

int Form::getGradeToExecute(void) const 
{
    return (gradeToExecute);
}

bool    Form::getIsSigned(void) const
{
    return (IsSigned);
}

const char *Form::GradeTooHighException::what(void) const throw(){
    return ("Grade is higher ... !");
} 

const char *Form::GradeTooLowException::what(void) const throw(){
    return ("Grade is lower !");
}

void    Form::beSigned(const Bureaucrat &object)
{
    if (IsSigned)
        return ;
    if (gradeToSign < object.GetGrade())
        throw GradeTooLowException();
    else
        IsSigned = true;
}

std::ostream &operator<<(std::ostream &output, const Form &object)
{
    output << "name: " << object.getName() << \
          ", isSigned: " << object.getIsSigned() <<\
          ", grade required to sign: " << object.getGradeToSign() << \
          ", grade required to execute : " << object.getGradeToExecute();
    return (output);
}

Form::~Form()
{
}