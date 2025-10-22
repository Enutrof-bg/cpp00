/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 13:37:15 by kevwang           #+#    #+#             */
/*   Updated: 2025/10/22 13:37:16 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "Materia Default Constructor" << std::endl;
	this->type = "Default";
}

AMateria::AMateria(std::string const & type)
{
	std::cout << "Materia Default Constructor" << std::endl;
	this->type = type;
}

AMateria::AMateria(const AMateria &copy)
{
	std::cout << "Materia Copy constructor" << std::endl;
	*this = copy;
}

AMateria &AMateria::operator=(AMateria const &other)
{
	std::cout << "Materia Copy assignment operator" << std::endl;
	if (this != &other)
	{
		this->type = other.getType();
	}
	return *this;
}

AMateria::~AMateria()
{
	std::cout << "Materia Default Destructor" << std::endl;
}

std::string const &AMateria::getType() const
{
	return this->type;
}

// AMateria::AMateria* clone()
// {
// 	return new AMateria();
// }

void AMateria::use(ICharacter& target)
{
	std::cout << "* heals "<< target.getName() << "’s wounds *" << std::endl;
	// std::cout << "use" << std::endl;
}
