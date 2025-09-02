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
		if (str[i] != ' ' && str[i] != '\t')
			return (0);
		i++;
	}
	return (1);
}

int main()
{
	std::string		cmdInput;
	PhoneBook		Rep;
	int				NbrContact;
	std::string		index;
	int				checkIndex;

	Rep.SetNbrContact();
	while(1)
	{
		checkIndex = 0;
		std::cout << "Enter one of those command: 'ADD' 'SEARCH' 'EXIT'" << std::endl;
		getline(std::cin, cmdInput);
		if (std::cin.eof() == 1)
		{
			std::cout << "EOF. Quit." << std::endl;
			return (0);
		}
		else if (ft_strncmp(cmdInput, "ADD", 4) == 0)
		{
			if (Rep.AddContact() == 1)
			{
				break ;
			}
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
				while (getline(std::cin, index) && checkIndex == 0)
				{
					if (std::cin.eof() == 1)
					{
						checkIndex = 1;
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
