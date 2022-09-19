/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 08:07:57 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/20 12:31:36 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


int main(void)
{
   try
	{
		Intern intern;
		Form *form;

		form = intern.MakeForm("RobotomyRequestForm", "mjung");
		form = intern.MakeForm("wrongForm", "mjung");
		std::cout << form->getName() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
    return (EXIT_SUCCESS);
}