/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 08:07:57 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/20 11:37:32 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    try{
        Bureaucrat objOne("Conan", 49);
        Form       objTwo("sale", 50);
        std::cout << objOne;
        objOne.IncrementGrade();
        std::cout << objOne;
        objOne.SignForm(objTwo);
        objTwo.beSigned(objOne);
        objOne.SignForm(objTwo);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (EXIT_SUCCESS);
}