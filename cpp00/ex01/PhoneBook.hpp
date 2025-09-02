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
	void SetNbrContact();
	int GetNbrContact();
	void Search();
	void Index(int i);
	int AddContact();
};