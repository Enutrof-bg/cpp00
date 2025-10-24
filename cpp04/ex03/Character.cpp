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
	// std::cout << "Character Default Constructor" << std::endl;
	_name = "Default";
	for (int i = 0; i < 4; i++)
	{
		_inventory[i] = NULL;
	}
}

Character::Character(std::string name)
{
	// std::cout << "Character Default Constructor" << std::endl;
	_name = name;
	for (int i = 0; i < 4; i++)
	{
		_inventory[i] = NULL;
	}
}

Character::Character(const Character &copy)
{
	// std::cout << "Character Copy constructor" << std::endl;
	for (int j = 0; j < 4; j++)
	{
		_inventory[j] = NULL;
	}
	*this = copy;
}

Character &Character::operator=(const Character &other)
{
	// std::cout << "Character Copy assignment operator" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		for (int i = 0; i < 4; i++)
		{
			if (_inventory[i] != NULL)
			{
				delete _inventory[i];
				_inventory[i] = NULL;
			}
			if (other._inventory[i] != NULL)
				_inventory[i] = other._inventory[i]->clone();
		}
	}
	
	return *this;
}

Character::~Character()
{
	// std::cout << "Character Default Destructor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] != NULL)
			delete _inventory[i];
	}
}

std::string const &Character::getName() const
{
	return (this->_name);
}

// ICharacter::~ICharacter()
// {

// }

void Character::equip(AMateria* m)
{
	if (m == NULL)
	{
		std::cout << "Cannot equip NULL materia." << std::endl;
		return ;
	}

	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			std::cout << "Materia equiped at slot " << i << std::endl;
			return ;
		}
	}
	std::cout << "Inventory full." << std::endl;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && _inventory[idx] != NULL)
	{
		_inventory[idx] = NULL;
		std::cout << "Materia unequiped at slot " << idx << std::endl;
	}
	else if (idx >= 0 && idx < 4 && _inventory[idx] == NULL)
		std::cout << "Empty slot at index : " << idx << std::endl;
	else if (idx < 0 || idx >=4 )
		std::cout << "Wrong index : " << idx << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 3)
	{
		if (_inventory[idx] != NULL)
			_inventory[idx]->use(target);
		else
			std::cout << "* Empty slot *" << std::endl;
	}
	else
		std::cout << "Invalid index :"<< idx << std::endl;
}