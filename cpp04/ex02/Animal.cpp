/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:09:45 by kevwang           #+#    #+#             */
/*   Updated: 2025/10/16 16:09:46 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Default Constructor" << std::endl;
	this->type = "Default";
}

Animal::Animal(std::string type)
{
	std::cout << "Animal Default Constructor" << std::endl;
	this->type = type;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Animal Copy constructor" << std::endl;
	*this = copy;
}

Animal &Animal::operator=(const Animal &other)
{
	std::cout << "Animal Copy assignment operator" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor" << std::endl;
}

std::string Animal::getType() const
{
	return (type);
}
