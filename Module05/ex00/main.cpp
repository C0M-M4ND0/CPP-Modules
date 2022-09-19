/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 08:07:57 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/20 11:19:10 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    try{
        Bureaucrat objOne("Conan", 149);
        
        std::cout << objOne;
        objOne.DecrementGrade();
        std::cout << objOne;
        objOne.IncrementGrade();
        std::cout << objOne;
        objOne.DecrementGrade();
        std::cout << objOne;
        objOne.DecrementGrade();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (EXIT_SUCCESS);
}