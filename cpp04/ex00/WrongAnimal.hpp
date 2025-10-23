/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:59:48 by kevwang           #+#    #+#             */
/*   Updated: 2025/10/21 16:59:49 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
	std::string type;

public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &copy);
	WrongAnimal &operator=(const WrongAnimal &other);
	virtual ~WrongAnimal();

	std::string getType() const;

	void makeSound() const;
};

