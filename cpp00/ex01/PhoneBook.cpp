/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 18:29:23 by kevwang           #+#    #+#             */
/*   Updated: 2025/08/20 18:29:25 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void PhoneBook::SetNbrContact()
{
	NbrContact = 0;
}

int PhoneBook::GetNbrContact()
{
	return (NbrContact);
}

void PhoneBook::Search()
{
	int i = 0;
	while(i < NbrContact)
	{
		list[i].print_contact(i);
		i++;
	}
}

void PhoneBook::Index(int i)
{
	if (i >= NbrContact)
		std::cout << "Contact Empty." << std::endl;
	else
		list[i].ShowInfoAll();
}

int PhoneBook::AddContact()
{
	MyContact NewContact;
	static int i = 0;

	if (NewContact.GetInfo() == 1)
		return (1);
	std::cout << "Contact added.\n";
	list[i] = NewContact;
	if (NbrContact < 8)
		NbrContact++;
	i++;
	if (i == 8)
		i = 0;
	return (0);
}