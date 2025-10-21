/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 18:07:15 by kevwang           #+#    #+#             */
/*   Updated: 2025/10/14 18:07:16 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stdio.h>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
private:
	// std::string _name;
	// int _hitPoints;
	// int _energyPoints;
	// int _attackDamage;

public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &copy);
	ScavTrap &operator=(const ScavTrap &other);
	~ScavTrap();

	void attack(const std::string& target);
	void guardGate();
};