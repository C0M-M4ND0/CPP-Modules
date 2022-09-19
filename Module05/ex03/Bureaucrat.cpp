/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 08:08:21 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/20 14:13:22 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Bureaucart's Default Constructor Called" << std::endl;
    grade = 1;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{
    std::cout << "Bureaucart's Constructor Called" << std::endl;
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &object)
{
    std::cout << "Bureaucrat's Copy Constructor Called" << std::endl;
    *this = object;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &object)
{
    grade = object.GetGrade();
    return (*this);
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw(){
    return ("1 is highest possible grade ... !");
} 

const char *Bureaucrat::GradeTooLowException::what(void) const throw(){
    return ("150 is lowest possible grade ... !");
}


void    Bureaucrat::IncrementGrade(void)
{
    if (grade == 1)
        throw GradeTooHighException();
    else
        grade--;
}

void    Bureaucrat::DecrementGrade(void)
{
    if (grade == 150)
        throw GradeTooLowException();
    else
        grade++;
}

std::string Bureaucrat::GetName(void) const
{
    return (name);
}

int         Bureaucrat::GetGrade(void) const
{
    return (grade);
}

std::ostream &operator<<(std::ostream &output, const Bureaucrat &object)
{
    output << object.GetName() << " , bureaucrat grade " << object.GetGrade() << std::endl;
    return (output);
}

void    Bureaucrat::SignForm(Form &object) const
{
    std::string reason;
    if (object.getIsSigned())
        reason = "it's already signed";
    else if (object.getGradeToSign() < grade)
        reason = "Grade is lower than required one";
    else
    {
        object.beSigned(*this);
        std::cout << name << " Signed " << object.getName() << std::endl;
        return ;
    }
    std::cout << name << " couldn't sing " \
    << object.getName() << " because " \
    << reason << std::endl;
}
Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucart's Destructor Called" << std::endl;
}