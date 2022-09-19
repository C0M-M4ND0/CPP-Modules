/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 18:30:50 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/20 12:54:43 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form::Form("PresidentialPardonForm", 25, 5){
    std::cout << "PresidentialPardonForm's Default constructor called" << std::endl;
    target = "Default";
}

PresidentialPardonForm::PresidentialPardonForm(std::string _target) : Form::Form("PresidentialPardonForm", 25, 5){
    std::cout << "PresidentialPardonForm's constructor called" << std::endl;
    target = _target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &object) : Form(object.getName(), object.getGradeToSign(), object.getGradeToExecute()){
    target = object.getTarget();
}

std::string   PresidentialPardonForm::getTarget(void) const{
    return (target);
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& object){
    target = object.getTarget();
    return (*this);
}

void    PresidentialPardonForm::pardon(void) const {
    std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

void    PresidentialPardonForm::execute(Bureaucrat const &executer) const{
    if (getIsSigned() == false)
        throw Form::UnsignedFormException();
    if (this->getGradeToExecute() < executer.GetGrade())
        throw Form::GradeTooLowException();
    pardon();
}

PresidentialPardonForm::~PresidentialPardonForm(){
    std::cout << "PresidentialPardonForm's Destructor Called" << std::endl;
}