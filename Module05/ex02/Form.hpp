/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 09:15:14 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/20 12:51:07 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <string>

class Bureaucrat;

class Form
{
private:
    const std::string   name;
    bool                IsSigned;
    const int           gradeToSign;
    const int           gradeToExecute;
public:
    Form();
    Form(const std::string, const int, const int);
    Form(Form const&);
    Form &operator=(Form const&);
    bool        getIsSigned() const;
    std::string getName(void) const;
    int   getGradeToSign(void) const;
    int   getGradeToExecute(void) const;
    void        beSigned(const Bureaucrat&);
    virtual void execute(Bureaucrat const &) const = 0;
    void    executeForm(Form const &);
    class GradeTooHighException : public std::exception
    {
        public:
            const char *what(void) const throw();
    };

    class GradeTooLowException : public std::exception
    {
        public:
            const char *what(void) const throw();
    };
    
	class UnsignedFormException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
    virtual ~Form();
};

std::ostream &operator<<(std::ostream &, Form&);
#endif