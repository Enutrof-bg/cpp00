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
	// std::cout << "Dog Default Constructor" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog &copy) : Animal(copy), brain(NULL)
{
	// std::cout << "Dog Copy constructor" << std::endl;
	*this = copy;
}

Dog &Dog::operator=(const Dog &other)
{
	// std::cout << "Dog Copy assignment operator" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		if (this->brain)
			delete this->brain;
		this->brain = new Brain(*other.getBrain());
	}
	return *this;
}

Dog::~Dog()
{
	// std::cout << "Dog Destructor" << std::endl;
	delete this->brain;
}

void Dog::makeSound() const
{
	std::cout << "Wouf" << std::endl;
}

Brain* Dog::getBrain()
{
	return (brain);
}

const Brain* Dog::getBrain() const
{
	return (brain);
}