/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 19:40:35 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/20 14:19:46 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include <fstream>
#include "Form.hpp"

class Bureaucrat;
class ShrubberyCreationForm : public Form
{
private:
    std::string target;
    void    plantTree(void) const;
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string);
    ShrubberyCreationForm(const ShrubberyCreationForm&);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm&);
    std::string getTarget(void)const;
    void execute(Bureaucrat const &) const ;
    ~ShrubberyCreationForm();
};

#endif