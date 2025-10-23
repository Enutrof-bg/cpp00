/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 13:56:19 by kevwang           #+#    #+#             */
/*   Updated: 2025/10/22 13:56:21 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

// #include "main.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
protected:
	std::string _name;
	AMateria* _inventory[4];

public:
	Character();
	Character(std::string name);
	Character(const Character &copy);
	Character &operator=(const Character &other);
	~Character();
	
	std::string const & getName() const;
	// virtual ~ICharacter() {}
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};