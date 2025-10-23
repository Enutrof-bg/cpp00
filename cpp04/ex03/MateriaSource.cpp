/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 13:56:41 by kevwang           #+#    #+#             */
/*   Updated: 2025/10/22 13:56:42 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "Materia Default Constructor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		_spellBook[i] = NULL;
	}
}

MateriaSource::~MateriaSource()
{
	std::cout << "Materia Default Destructor" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_spellBook[i] != NULL)
		{
			delete _spellBook[i];
		}
	}
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	std::cout << "Materia Copy constructor" << std::endl;
	*this = copy;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	std::cout << "Materia Copy assignment operator" << std::endl;
	(void)other;
	// if (this != &other)
	// {
	// 	this->_name = other._name;
	// 	for (int j = 0; j < 4; j++)
	// 	{
	// 		_spellBook[j] = NULL;
	// 	}
	// 	for (int i = 0; i < 4; i++)
	// 	{
	// 		if (_spellBook[i] != NULL)
	// 		{
	// 			delete _spellBook[i];
	// 			_spellBook[i] = NULL;
	// 		}
	// 		if (other._spellBook[i] != NULL)
	// 			_spellBook[i] = other._spellBook[i]->clone();
	// 	}
	// }
	return *this;
}

	// ~IMateriaSource() {}
void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_spellBook[i] == NULL)
		{
			// _spellBook[i] = m->clone();
			_spellBook[i] = m;
			std::cout << "Materia learned" << std::endl;
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0; i < 4; i++)
	{
		if (_spellBook[i]->getType() == type)
		{
			std::cout << "Materia copied" << std::endl;
			return (_spellBook[i]->clone());
		}
	}
	std::cout << "No Materia of this type" << std::endl;
	return 0;
}