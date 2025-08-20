/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 13:26:49 by kevwang           #+#    #+#             */
/*   Updated: 2025/08/20 13:26:49 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

class PhoneBook
{
private:
	MyContact list[8];
	int NbrContact;

public:
	void SetNbrContact()
	{
		NbrContact = 0;
	}
	int GetNbrContact()
	{
		return (NbrContact);
	}
	void Search()
	{
		int i = 0;
		while(i < NbrContact)
		{
			list[i].print_contact(i);
			i++;
		}
	}
	void Index(int i)
	{
		if (i >= NbrContact)
			std::cout << "Contact Empty." << std::endl;
		else
			list[i].ShowInfoAll();
	}
	int AddContact()
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
};