/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:09:20 by kevwang           #+#    #+#             */
/*   Updated: 2025/10/16 16:09:22 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Default Constructor" << std::endl;
	this->type = "Dog";
}

Dog::Dog(std::string type)
{
	std::cout << "Dog Default Constructor" << std::endl;
	this->type = type;
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Dog Copy constructor" << std::endl;
	*this = copy;
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Dog Copy assignment operator" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Wouf" << std::endl;
}