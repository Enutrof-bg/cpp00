/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:14:29 by kevwang           #+#    #+#             */
/*   Updated: 2025/10/14 17:14:31 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stdio.h>

class ClapTrap
{
protected:
	std::string _name;
	int _hitPoints;
	int _energyPoints;
	int _attackDamage;

public:
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &other);
	ClapTrap &operator=(const ClapTrap &other);
	virtual ~ClapTrap(void);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void setName(std::string name);
	void setHitPoints(int amount);
	void setEnergyPoints(int amount);
	void setAttackDamage(int amount);

};