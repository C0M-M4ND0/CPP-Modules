/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:52:27 by oabdelha          #+#    #+#             */
/*   Updated: 2022/07/23 09:38:26 by oabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	Contacts[8];
		int		index;
		int		ContactNumber;
	public:
		PhoneBook(void);
		~PhoneBook(void){};

		void	Add(int);
		void	Header(void);
		void	Search(void);
		void	Display(int);
};

int	IsNumber(std::string);

#endif