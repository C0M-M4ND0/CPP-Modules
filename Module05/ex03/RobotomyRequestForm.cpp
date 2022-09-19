/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:46:05 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/20 14:15:11 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form::Form("RobotomyRequestForm", 72, 45){
    std::cout << "RobotomyRequestForm's Default constructor called" << std::endl;
    target = "Default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string _target) : Form::Form("RobotomyRequestForm", 72, 45){
    std::cout << "RobotomyRequestForm's constructor called" << std::endl;
    target = _target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &object) : Form(object.getName(), object.getGradeToSign(), object.getGradeToExecute()){
    target = object.getTarget();
}

std::string   RobotomyRequestForm::getTarget(void) const{
    return (target);
}
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& object){
    target = object.getTarget();
    return (*this);
}

void    RobotomyRequestForm::drillingNoises(void) const {
    int random;

    std::srand(time(0));
    random = std::rand() % 2;
    std::cout << "Drrrr DDrrr DrDrDr Drrrrr ...." << std::endl;
    if (random)
        std::cout << target << " has been Robotomized" << std::endl;
    else
        std::cout << "Oooops , Fail....!" << std::endl;
}

void    RobotomyRequestForm::execute(Bureaucrat const &executer) const{
    if (getIsSigned() == false)
        throw Form::UnsignedFormException();
    if (this->getGradeToExecute() < executer.GetGrade())
        throw Form::GradeTooLowException();
   drillingNoises();
}

RobotomyRequestForm::~RobotomyRequestForm(){
    std::cout << "RobotomyRequestForm's Destructor Called" << std::endl;
}