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

#include <iostream>
using namespace std;

class MyContact
{
public:
	string FirstName;
	string LastName;
	string Nickname;
	string PhoneNumber;
	string DarkestSecret;
};

class PhoneBook
{
public:

};

void addContact()
{
	MyContact NewContact;

	cout << "First Name : ";
	cin >> NewContact.FirstName;
	cout << "Last Name : ";
	cin >> NewContact.LastName;
	cout << "Nickname : ";
	cin >> NewContact.Nickname;
	cout << "Phone Number : ";
	cin >> NewContact.PhoneNumber;
	cout << "Darkest Secret : ";
	cin >> NewContact.DarkestSecret;
	// cout << "test"<<NewContact.FirstName <<
	// NewContact.LastName << NewContact.Nickname << NewContact.PhoneNumber<< NewContact.DarkestSecret;
	cout << "Contact added.\n";
}

int ft_strncmp(string input, string cmd, int size)
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

int main()
{
	string cmdInput;

	// cout << x << '\n';

	// int cmp = ft_strncmp(x, "ADD", 3);

	// cout << cmp;
	int loop = 1;
	while(loop == 1)
	{
		cin >> cmdInput;
		if (ft_strncmp(cmdInput, "ADD", 4) == 0)
		{
			addContact();
			// addContact();
		}
		else if (ft_strncmp(cmdInput, "EXIT", 5) == 0)
		{
			break ;
			// addContact();
		}
	}

}