/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 18:30:48 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/20 12:54:51 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
class Bureaucrat;

class PresidentialPardonForm : public Form
{
private:
    std::string target;
    void    pardon(void) const;
public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string);
    PresidentialPardonForm(const PresidentialPardonForm&);
    PresidentialPardonForm &operator=(const PresidentialPardonForm&);
    std::string getTarget(void)const;
    void execute(Bureaucrat const &) const ;
    ~PresidentialPardonForm();
};

#endif