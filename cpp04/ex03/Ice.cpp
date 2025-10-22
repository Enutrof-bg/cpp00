/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 13:51:10 by kevwang           #+#    #+#             */
/*   Updated: 2025/10/22 13:51:10 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice()
{
	std::cout << "Ice Default Constructor" << std::endl;
	this->type = "ice";
}
Ice::Ice(const Ice &copy)
{
	std::cout << "Ice Copy constructor" << std::endl;
	*this = copy;
}

Ice &Ice::operator=(const Ice &other)
{
	std::cout << "Ice Copy assignment operator" << std::endl;
	if (this != &other)
	{
		this->type = other.getType();
	}
	return *this;
}

Ice::~Ice()
{
	std::cout << "Ice Default Destructor" << std::endl;
}

Ice* Ice::clone() const
{
	return new Ice();
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at "<< target.getName() << " *" << std::endl;
}
