/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 13:56:23 by kevwang           #+#    #+#             */
/*   Updated: 2025/10/22 13:56:24 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	std::cout << "Character Default Constructor" << std::endl;
	_name = "NewPlayer";
}

Character::Character(std::string name)
{
	std::cout << "Character Default Constructor" << std::endl;
	_name = name;
}

Character::Character(const Character &copy)
{
	std::cout << "Character Copy constructor" << std::endl;
	*this = copy;
}

Character &Character::operator=(const Character &other)
{
	std::cout << "Character Copy assignment operator" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
	}
	return *this;
}

Character::~Character()
{
	std::cout << "Character Default Destructor" << std::endl;
}

std::string const &Character::getName() const
{
	return (this->_name);
}

// ICharacter::~ICharacter()
// {

// }