/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 18:07:12 by kevwang           #+#    #+#             */
/*   Updated: 2025/10/14 18:07:13 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap Derived constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
		/*:_name(name), _hitPoints(100), _energyPoints(50), _attackDamage(20)*/
{
	std::cout << "ScavTrap Derived constructor called" << std::endl;
	// setName(name);
	// setHitPoints(100);
	// setEnergyPoints(50);
	// setAttackDamage(20);
	// _name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy)
{
	std::cout << "ScavTrap Derived copy constructor called" << std::endl;
	*this = copy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}	
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Derived destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (_hitPoints <= 0)
		std::cout << "ScavTrap " << _name << "doesn't have enough HP." << std::endl;
	else if (_energyPoints <= 0)
		std::cout << "ScavTrap " << _name << "doesn't have enough Energy Points" << std::endl;
	else if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "ScavTrap "<< _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!"<<std::endl;
		_energyPoints--;
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate Mode !" << std::endl;
}