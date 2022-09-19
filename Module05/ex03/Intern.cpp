/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 09:43:30 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/20 14:17:48 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

 Intern::Intern(){
    std::cout << "Intern Default Constructor Called" << std::endl;
}

Intern::Intern(const Intern &object){
    forms[0] = object.forms[0];
    forms[1] = object.forms[1];
    forms[2] = object.forms[2];
}

Intern &Intern::operator=(const Intern &object){
    (void)object;
    return (*this);
}

Form *Intern::MakeForm(std::string name, std::string target){
    forms[0] = new ShrubberyCreationForm(target);
    forms[1] = new RobotomyRequestForm(target);
    forms[2] = new PresidentialPardonForm(target);
    for (int i = 0; i < 3; i++)
        if (name == forms[i]->getName())
        {
            std::cout << "Intern creates " << name << std::endl;
            return (forms[i]);    
        }
    throw UnknownForm();
}

const char *Intern::UnknownForm::what(void) const throw(){
    return ("Sorry, We don't do this here sir");
}

Intern::~Intern(){
    std::cout << "Intern Destructor Called" <<std::endl;
    for (int i = 0; i < 3; i++)
        delete forms[i];
}