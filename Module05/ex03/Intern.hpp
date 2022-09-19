/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 09:43:33 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/20 14:17:43 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Form;

 class Intern
 {
 private:
    Form *forms[3];
 public:
    Intern();
    Intern(const Intern&);
    Intern &operator=(const Intern&);
    Form *MakeForm(std::string, std::string);
    class UnknownForm : public std::exception{
        public:
            const char *what(void) const throw();
    };
    virtual  ~Intern();
 };
 

 
#endif