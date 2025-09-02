/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyContact.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 18:29:14 by kevwang           #+#    #+#             */
/*   Updated: 2025/08/20 18:29:15 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

std::string MyContact::ft_print(std::string str)
{
	std::string NewStr;

	if (str.size() > 10)
	{
		NewStr = str.substr(0,9) + ".";
	}
	else
	{
		NewStr = str;
		while (NewStr.size() < 10)
		{
			NewStr = ' ' + NewStr;
		}	
	}
	return (NewStr);
}

void MyContact::print_contact(int i)
{
	std::cout << "         " << i << "|" << ft_print(FirstName) << "|" << ft_print(LastName) << "|" << ft_print(Nickname) << std::endl;
}

int MyContact::GetInfo()
{
	std::cout << "First Name : ";
	while (getline(std::cin, FirstName) && ft_is_space(FirstName) == 1)
	{
		std::cout << "First Name : ";
	}
	if (std::cin.eof() == 1)
	{
		std::cout << "\nEOF. Quit." << std::endl;
		return (1) ;
	}

	std::cout << "Last Name : ";
	while (getline(std::cin, LastName) && ft_is_space(LastName) == 1)
	{
		std::cout << "Last Name : ";
	}
	if (std::cin.eof() == 1)
	{
		std::cout << "\nEOF. Quit." << std::endl;
		return (1) ;
	}

	std::cout << "Nickname : ";
	while (getline(std::cin, Nickname) && ft_is_space(Nickname) == 1)
	{
		std::cout << "Nickname : ";
	}
	if (std::cin.eof() == 1)
	{
		std::cout << "\nEOF. Quit." << std::endl;
		return (1) ;
	}

	std::cout << "Phone Number : ";
	while (getline(std::cin, PhoneNumber) && ft_is_space(PhoneNumber) == 1)
	{
		std::cout << "Phone Number : ";
	}
	if (std::cin.eof() == 1)
	{
		std::cout << "EOF. Quit." << std::endl;
		return (1) ;
	}

	std::cout << "Darkest Secret : ";
	while (getline(std::cin, DarkestSecret) && ft_is_space(DarkestSecret) == 1)
	{
		std::cout << "Darkest Secret : ";
	}
	if (std::cin.eof() == 1)
	{
		std::cout << "EOF. Quit." << std::endl;
		return (1) ;
	}
	return (0);
}

void MyContact::ShowInfo()
{
	std::cout << "Phone Number : " << PhoneNumber << std::endl;
	std::cout << "Darkest Secret : " << DarkestSecret << std::endl;
}

void MyContact::ShowInfoAll()
{
	std::cout << "First Name : " << FirstName << std::endl;
	std::cout << "Last Name : " << LastName << std::endl;
	std::cout << "Nickname : " << Nickname << std::endl;
	std::cout << "Phone Number : " << PhoneNumber << std::endl;
	std::cout << "Darkest Secret : " << DarkestSecret << std::endl;
}
