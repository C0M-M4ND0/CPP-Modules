/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 08:07:57 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/20 12:18:07 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"


int main(void)
{
    try
	{
		Bureaucrat human("Conan",6);
		ShrubberyCreationForm myTree("cinerea");
		RobotomyRequestForm robotomy("Mr.Robot");
		PresidentialPardonForm pardon("okk");
		std::cout << human;
		myTree.beSigned(human);
		pardon.beSigned(human);
		human.SignForm(myTree);
		human.SignForm(robotomy);
		robotomy.beSigned(human);
		human.SignForm(pardon);
		myTree.execute(human);
		robotomy.execute(human);
		pardon.execute(human);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
    return (EXIT_SUCCESS);
}