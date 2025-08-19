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

class MyContact
{
private:
	string FirstName;
	string LastName;
	string Nickname;
	string PhoneNumber;
	string DarkestSecret;

public:
	string ft_print(string str)
	{
		string NewStr;

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
		cout << "         " << i << "|" << ft_print(FirstName) << "|" << ft_print(LastName) << "|" << ft_print(Nickname) << endl;
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
	void ShowInfo()
	{
		cout << "Phone Number : " << PhoneNumber << endl;
		cout << "Darkest Secret : " << DarkestSecret << endl;
	}
	void ShowInfoAll()
	{
		cout << "First Name : " << FirstName << endl;
		cout << "Last Name : " << LastName << endl;
		cout << "Nickname : " << Nickname << endl;
		cout << "Phone Number : " << PhoneNumber << endl;
		cout << "Darkest Secret : " << DarkestSecret << endl;
	}
};

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
			cout << "Contact Empty." << endl;
		else
			list[i].ShowInfoAll();
	}
	void AddContact()
	{
		MyContact NewContact;
		static int i = 0;

		NewContact.GetInfo();
		cout << "Contact added.\n";
		list[i] = NewContact;
		if (NbrContact < 8)
			NbrContact++;
		i++;
		if (i == 8)
			i = 0;
	}
};

int main()
{
	string		cmdInput;
	PhoneBook	Rep;
	int			NbrContact;
	int			index;

	cout << "Enter one of those command: 'ADD' 'SEARCH' 'EXIT'" << endl;
	Rep.SetNbrContact();
	while(1)
	{
		cin >> cmdInput;
		if (ft_strncmp(cmdInput, "ADD", 4) == 0)
		{
			Rep.AddContact();
		}
		if (ft_strncmp(cmdInput, "SEARCH", 7) == 0)
		{
			Rep.Search();
			NbrContact = Rep.GetNbrContact();
			if (NbrContact == 0)
				cout << "Empty." << endl;
			else
			{
				cout << "Index : ";
				if (cin >> index)
				{
					if (index < 0 || index > 8)
					{
						cout << "Index invalid" << endl;
					}
					else
					{

						Rep.Index(index);
					}
				}
				else
				{
					cin.clear();
					cout << "Index invalid" << endl;
				}
				
			}
		}
		else if (ft_strncmp(cmdInput, "EXIT", 5) == 0)
		{
			break ;
		}
	}
}
