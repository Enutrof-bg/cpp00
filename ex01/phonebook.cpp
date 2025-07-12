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
#include <string>
using namespace std;

class MyContact
{
private:
	string FirstName;
	string LastName;
	string Nickname;
	string PhoneNumber;
	string DarkestSecret;

public:
	void print_contact()
	{
		cout << "First Name : " << FirstName << endl;
		cout << "Last Name : " << LastName << endl;
		cout << "Nickame : " << Nickname << endl;
		cout << "Phone Number : " << PhoneNumber << endl;
		cout << "Darkest Secret : " << DarkestSecret << endl;
	}
	void GetInfo()
	{
		cout << "First Name : ";
		cin >> FirstName;
		cout << "Last Name : ";
		cin >> LastName;
		cout << "Nickname : ";
		cin >> Nickname;
		cout << "Phone Number : ";
		cin >> PhoneNumber;
		cout << "Darkest Secret : ";
		cin >> DarkestSecret;
	}
};

class PhoneBook
{
private:
	MyContact list[8];
};

void addContact()
{
	MyContact NewContact;

	NewContact.GetInfo();
	// NewContact.LastName << NewContact.Nickname << NewContact.PhoneNumber<< NewContact.DarkestSecret;
	cout << "Contact added.\n";
	// NewContact.print_contact();
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
	PhoneBook Rep;
	// cout << x << '\n';

	// int cmp = ft_strncmp(x, "ADD", 3);

	// cout << cmp;
	int loop = 1;
	while(loop == 1)
	{
		cin >> cmdInput;
		if (ft_strncmp(cmdInput, "ADD", 4) == 0)
		{
			addContact(Rep);
			// addContact();
		}
		else if (ft_strncmp(cmdInput, "EXIT", 5) == 0)
		{
			break ;
			// addContact();
		}
	}

}