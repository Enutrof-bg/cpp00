/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 16:35:59 by kevwang           #+#    #+#             */
/*   Updated: 2025/07/09 16:36:00 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

int ft_strlen(std::string str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

int ft_strncmp(std::string input, std::string cmd, int size)
{
	int i = 0;

	if (size == 0)
		return (0);
	while (input[i] && cmd[i] && input[i] == cmd[i] && i < size -1)
	{
		i++;
	}
	return (input[i] - cmd[i]);
}

int ft_is_space(std::string str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}
/*
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

		int len = ft_strlen(str);
		if (len > 10)
		{
			NewStr = str.substr(0,9) + ".";
		}
		else
		{
			NewStr = str;
			while (ft_strlen(NewStr) < 10)
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
*/

/*
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
*/

int main()
{
	std::string		cmdInput;
	PhoneBook		Rep;
	int				NbrContact;
	std::string		index;

	Rep.SetNbrContact();
	while(1)
	{
		std::cout << "Enter one of those command: 'ADD' 'SEARCH' 'EXIT'" << std::endl;
		getline(std::cin, cmdInput);
		if (std::cin.eof() == 1)
		{
			std::cout << "EOF. Quit." << std::endl;
			break ;
		}
		if (ft_strncmp(cmdInput, "ADD", 4) == 0)
		{
			if (Rep.AddContact() == 1)
				break ;
		}
		else if (ft_strncmp(cmdInput, "SEARCH", 7) == 0)
		{
			Rep.Search();
			NbrContact = Rep.GetNbrContact();
			if (NbrContact == 0)
				std::cout << "Empty." << std::endl;
			else
			{
				std::cout << "Index : ";
				while (getline(std::cin, index))
				{
					if (std::cin.eof() == 1)
					{
						std::cout << "EOF. Quit." << std::endl;
						return (0);
					}
					if (index.size() == 1 && index[0] >= '0' && index[0] <= '7')
					{
							Rep.Index(index[0] - '0');
							break ;
					}
					else
						std::cout << "Please pick an index between 0 and 7" << std::endl;
				}
			}
		}
		else if (ft_strncmp(cmdInput, "EXIT", 5) == 0)
		{
			break ;
		}
	}
	return (0);
}
