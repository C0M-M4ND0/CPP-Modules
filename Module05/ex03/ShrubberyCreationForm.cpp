/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:40:33 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/20 14:19:53 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form::Form("ShrubberyCreationForm", 145, 137){
    std::cout << "ShrubberyCreationForm's Default constructor called" << std::endl;
    target = "Default";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target) : Form::Form("ShrubberyCreationForm", 145, 137){
    std::cout << "ShrubberyCreationForm's constructor called" << std::endl;
    target = _target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &object) : Form(object.getName(), object.getGradeToSign(), object.getGradeToExecute()){
    target = object.getTarget();
}

std::string   ShrubberyCreationForm::getTarget(void) const{
    return (target);
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm& object){
    target = object.getTarget();
    return (*this);
}
void    ShrubberyCreationForm::plantTree(void) const{
    std::string tree = 
"                                        .\n"
"                                              .         ;  \n"
"                 .              .              ;%     ;;   \n"
"                   ,           ,                :;%  %;   \n"
"                    :         ;                   :;%;'     ., \n"  
"           ,.        %;     %;            ;        %;'    ,;\n"
"             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
"              %;       %;%;      ,  ;       %;  ;%;   ,%;' \n"
"               ;%;      %;        ;%;        % ;%;  ,%;'\n"
"                `%;.     ;%;     %;'         `;%%;.%;'\n"
"                 `:;%.    ;%%. %@;        %; ;@%;%'\n"
"                    `:%;.  :;bd%;          %;@%;'\n"
"                      `@%:.  :;%.         ;@@%;'   \n"
"                        `@%.  `;@%.      ;@@%;        \n" 
"                          `@%%. `@%%    ;@@%;      \n"  
"                            ;@%. :@%%  %@@%;    \n"   
"                              %@bd%%%bd%%:;  \n"   
"                                #@%%%%%:;;\n"
"                                %@@%%%::;\n"
"                                %@@@%(o);  . '         \n"
"                                %@@@o%;:(.,'         \n"
"                            `.. %@@@o%::;         \n"
"                               `)@@@o%::;         \n"
"                                %@@(o)::;        \n"
"                               .%@@@@%::;        \n" 
"                               ;%@@@@%::;.    \n"      
"                             ;%@@@@%%:;;;.\n"
"                          ...;%@@@@@%%:;;;;,..\n";

    std::ofstream  ofs(target + "_shrubbery");
    if (!ofs.is_open())
    {
        std::cout << "Coulnd't open the output file" << std::endl;
		return ;
    }
    ofs << tree;
    ofs.close();
}

void    ShrubberyCreationForm::execute(Bureaucrat const &executer) const{
    if (getIsSigned() == false)
        throw Form::UnsignedFormException();
    if (this->getGradeToExecute() < executer.GetGrade())
        throw Form::GradeTooLowException();
    plantTree();
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
    std::cout << "ShrubberyCreationForm's Destructor Called" << std::endl;
}