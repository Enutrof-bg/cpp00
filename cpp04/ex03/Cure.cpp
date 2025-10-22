/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 13:51:19 by kevwang           #+#    #+#             */
/*   Updated: 2025/10/22 13:51:20 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure()
{
	std::cout << "Cure Default Constructor" << std::endl;
	this->type = "cure";
}
Cure::Cure(const Cure &copy)
{
	std::cout << "Cure Copy constructor" << std::endl;
	*this = copy;
}

Cure &Cure::operator=(const Cure &other)
{
	std::cout << "Cure Copy assignment operator" << std::endl;
	if (this != &other)
	{
		this->type = other.getType();
	}
	return *this;
}

Cure::~Cure()
{
	std::cout << "Cure Default Destructor" << std::endl;
}

AMateria* Cure::clone() const
{
	return new Cure();
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals "<< target.getName() << "’s wounds *" << std::endl;
	// std::cout << "* heals "<< target._name << "’s wounds *" << std::endl;
	// std::cout << "* heals xxx’s wounds *" << std::endl;
}