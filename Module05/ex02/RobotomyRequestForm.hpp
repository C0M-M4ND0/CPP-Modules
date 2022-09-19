/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:46:07 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/20 12:54:16 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
class Bureaucrat;

class RobotomyRequestForm : public Form
{
private:
    std::string target;
    void    drillingNoises(void) const;
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string);
    RobotomyRequestForm(const RobotomyRequestForm&);
    RobotomyRequestForm &operator=(const RobotomyRequestForm&);
    std::string getTarget(void)const;
    void execute(Bureaucrat const &) const;
    ~RobotomyRequestForm();
};

#endif