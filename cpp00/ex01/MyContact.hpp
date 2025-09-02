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
	std::string ft_print(std::string str);
	void print_contact(int i);
	int GetInfo();
	void ShowInfo();
	void ShowInfoAll();
};