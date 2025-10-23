/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:09:34 by kevwang           #+#    #+#             */
/*   Updated: 2025/10/16 16:09:35 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Default Constructor" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat &copy): Animal(copy), brain(NULL)
{
	std::cout << "Cat Copy constructor" << std::endl;
	*this = copy;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat Copy assignment operator" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		if (this->brain)
			delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor" << std::endl;
	delete this->brain;
}

void Cat::makeSound() const
{
	std::cout << "Meowww" << std::endl;
}