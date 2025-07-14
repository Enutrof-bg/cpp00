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

int ft_strlen(string str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

string ft_print(string str)
{
	string NewStr;
	// int i = 0;
	int len = ft_strlen(str);
	if (len > 10)
	{
	// 	while (i < 10)
	// 	{
	// 		// cout << "newstr:"<< NewStr[i] << " str:"<<str[i] << endl;
	// 		NewStr[i] = str[i];
	// 		// cout << "newstr:"<< NewStr[i] << " str:"<<str[i] << endl;
	// 		i++;
	// 	}
	// 	NewStr[i] = '.';
	// NewStr[i+1]='\0';
	// 	cout << NewStr;
		// NewStr[i+1]='\0';
		NewStr = str.substr(0,9) + ".";
	}
	else
	{
		NewStr = str;
		while (ft_strlen(NewStr) < 10)
		{
			NewStr = ' ' + NewStr;
		}	
		// return (str);
	}
	return (NewStr);
}

class MyContact
{
private:
	string FirstName;
	string LastName;
	string Nickname;
	string PhoneNumber;
	string DarkestSecret;

public:
	void print_contact(int i)
	{
		// cout << "First Name : " << FirstName << endl;
		// cout << "Last Name : " << LastName << endl;
		// cout << "Nickame : " << Nickname << endl;
		// cout << "Phone Number : " << PhoneNumber << endl;
		// cout << "Darkest Secret : " << DarkestSecret << endl;

		// cout << i << "|" << FirstName << "|" << LastName << "|" << Nickname << endl;

		cout << "         " << i << "|" <<ft_print(FirstName) << "|" << ft_print(LastName) << "|" << ft_print(Nickname) << endl;
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
	void info()
	{
		cout << "Phone Number :" << PhoneNumber << endl;
		cout << "Darkest Secret : " << DarkestSecret << endl;
	}
};

class PhoneBook
{
private:
	MyContact list[8];
	int NbrContact;

public:
	void Set()
	{
		NbrContact = 0;
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
		if (i > NbrContact)
			cout << "Contact Empty." << endl;
		else
			list[i].info();
	}

	void addContact()
	{
		MyContact NewContact;

		NewContact.GetInfo();
		// NewContact.LastName << NewContact.Nickname << NewContact.PhoneNumber<< NewContact.DarkestSecret;
		cout << "Contact added.\n";
		// NewContact.print_contact();
		static int i = 0;

		list[i] = NewContact;
		if (NbrContact < 8)
			NbrContact++;
		i++;
		if (i == 8)
			i = 0;
	}
};
/*
void addContact(PhoneBook *Rep)
{
	MyContact NewContact;

	NewContact.GetInfo();
	// NewContact.LastName << NewContact.Nickname << NewContact.PhoneNumber<< NewContact.DarkestSecret;
	cout << "Contact added.\n";
	// NewContact.print_contact();
	static int i = 0;

	Rep->list[i] = NewContact;
	if (Rep->NbrContact < 8)
		Rep->NbrContact++;
	i++;
	if (i == 8)
		i = 0;
}
*/

/*
void search(PhoneBook *Rep)
{
	
}
*/
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

	Rep.Set();
	// int loop = 1;

	// string s1 = "678901";
	// int size = ft_strlen(s1);
	// cout << size;
	// string s2 = ft_print(s1);
	// cout << s2;
	int index;

	while(1)
	{
		cin >> cmdInput;
		if (ft_strncmp(cmdInput, "ADD", 4) == 0)
		{
			// addContact(&Rep);
			Rep.addContact();
			// addContact();
		}
		if (ft_strncmp(cmdInput, "SEARCH", 7) == 0)
		{
			// search(&Rep);
			Rep.Search();
			cout << "Index : ";
			cin >> index;
			if (index < 0 || index > 8)
			{
				cout << "Index invalid";
			}
			else
			{
				Rep.Index(index);
			}
			// addContact();
		}
		else if (ft_strncmp(cmdInput, "EXIT", 5) == 0)
		{
			break ;
			// addContact();
		}
	}

}