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
// #include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
protected:
	std::string _name;

public:
	Character();
	Character(std::string name);
	Character(const Character &copy);
	Character &operator=(const Character &other);
	~Character();
	
	std::string const & getName() const;
	// virtual ~ICharacter() {}
	// virtual void equip(AMateria* m) = 0;
	// virtual void unequip(int idx) = 0;
	// virtual void use(int idx, ICharacter& target) = 0;
};