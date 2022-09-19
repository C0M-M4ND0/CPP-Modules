/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 09:16:22 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/20 12:51:43 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form() : name("Uknown"), gradeToSign(1) , gradeToExecute(1)
{
    std::cout << "Form's Default Constructor Called" << std::endl;
    IsSigned = false;
}

Form::Form(const std::string name, const int gradeToSign, const int gradeToExec) : name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExec)
{
    std::cout << "Form's Constructor Called" << std::endl;
    IsSigned = false;
    if (gradeToExecute < 1 || gradeToSign < 1)
        throw GradeTooHighException();
    else if (gradeToExecute > 150 || gradeToSign > 150)
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
    else if (gradeToSign < object.GetGrade())
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

const char* Form::UnsignedFormException::what() const throw(){
	return ("Sorry , Cannot execute an unsigned form");
};

void    Form::executeForm(Form const &form){
    (void)form;
}
Form::~Form(){
    std::cout << "Form's Default Destructor Called" << std::endl;
}
