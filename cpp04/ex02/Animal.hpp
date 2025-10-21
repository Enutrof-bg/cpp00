/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:10:03 by kevwang           #+#    #+#             */
/*   Updated: 2025/10/16 16:10:03 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <string>
#include <stdio.h>
#include "Brain.hpp"

class Animal
{
protected:
	std::string type;

Animal();
	Animal(std::string type);
	Animal(const Animal &copy);
	Animal &operator=(const Animal &other);
	virtual ~Animal();
public:
	std::string getType() const;

	virtual void makeSound() const;
};
