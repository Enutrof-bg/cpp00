/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 13:56:46 by kevwang           #+#    #+#             */
/*   Updated: 2025/10/22 13:56:46 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stdio.h>
#include "IMateriaSource.hpp"
// #include "main.hpp"
#include "AMateria.hpp"

class AMateria;

class MateriaSource : public IMateriaSource
{
protected:
	AMateria* _spellBook[4];
	
public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(const MateriaSource &copy);
	MateriaSource &operator=(const MateriaSource &other);

	// ~IMateriaSource() {}
	void learnMateria(AMateria* m);
	AMateria* createMateria(std::string const & type);
};