/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyContact.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 13:26:34 by kevwang           #+#    #+#             */
/*   Updated: 2025/08/20 13:26:35 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

class MyContact
{
private:
	std::string FirstName;
	std::string LastName;
	std::string Nickname;
	std::string PhoneNumber;
	std::string DarkestSecret;

public:
	std::string ft_print(std::string str)
	{
		std::string NewStr;

		// int len = ft_strlen(str);
		if (str.size() > 10)
		{
			NewStr = str.substr(0,9) + ".";
		}
		else
		{
			NewStr = str;
			// while (ft_strlen(NewStr) < 10)
			while (NewStr.size() < 10)
			{
				NewStr = ' ' + NewStr;
			}	
		}
		return (NewStr);
	}
	void print_contact(int i)
	{
		std::cout << "         " << i << "|" << ft_print(FirstName) << "|" << ft_print(LastName) << "|" << ft_print(Nickname) << std::endl;
	}
	int GetInfo()
	{
		std::cout << "First Name : ";
		while (getline(std::cin, FirstName) && ft_is_space(FirstName) == 1)
		{
			if (std::cin.eof() == 1)
			{
				std::cout << "EOF. Quit." << std::endl;
				return (1) ;
			}
			std::cout << "First Name : ";
		}

		std::cout << "Last Name : ";
		while (getline(std::cin, LastName) && ft_is_space(LastName) == 1)
		{
			if (std::cin.eof() == 1)
			{
				std::cout << "EOF. Quit." << std::endl;
				return (1) ;
			}
			std::cout << "Last Name : ";
		}

		std::cout << "Nickname : ";
		while (getline(std::cin, Nickname) && ft_is_space(Nickname) == 1)
		{
			if (std::cin.eof() == 1)
			{
				std::cout << "EOF. Quit." << std::endl;
				return (1) ;
			}
			std::cout << "Nickname : ";
		}

		std::cout << "Phone Number : ";
		while (getline(std::cin, PhoneNumber) && ft_is_space(PhoneNumber) == 1)
		{
			if (std::cin.eof() == 1)
			{
				std::cout << "EOF. Quit." << std::endl;
				return (1) ;
			}
			std::cout << "Phone Number : ";
		}

		std::cout << "Darkest Secret : ";
		while (getline(std::cin, DarkestSecret) && ft_is_space(DarkestSecret) == 1)
		{
			if (std::cin.eof() == 1)
			{
				std::cout << "EOF. Quit." << std::endl;
				return (1) ;
			}
			std::cout << "Darkest Secret : ";
		}
		return (0);
	}
	void ShowInfo()
	{
		std::cout << "Phone Number : " << PhoneNumber << std::endl;
		std::cout << "Darkest Secret : " << DarkestSecret <<std:: endl;
	}
	void ShowInfoAll()
	{
		std::cout << "First Name : " << FirstName << std::endl;
		std::cout << "Last Name : " << LastName << std::endl;
		std::cout << "Nickname : " << Nickname << std::endl;
		std::cout << "Phone Number : " << PhoneNumber << std::endl;
		std::cout << "Darkest Secret : " << DarkestSecret << std::endl;
	}
};