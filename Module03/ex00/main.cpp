/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 10:47:14 by oabdelha          #+#    #+#             */
/*   Updated: 2022/08/03 14:56:37 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap ct("one");

	ct.attack("two");
	ct.takeDamage(10);
	ct.beRepaired(5);
    return (EXIT_SUCCESS);
}   