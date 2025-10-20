/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:14:26 by kevwang           #+#    #+#             */
/*   Updated: 2025/10/14 17:14:27 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
		:_name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
		:_name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}	
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void ClapTrap::attack(const std::string& target)
{
	if (_hitPoints <= 0)
		std::cout << "ClapTrap " << _name << "doesn't have enough HP." << std::endl;
	else if (_energyPoints <= 0)
		std::cout << "ClapTrap " << _name << "doesn't have enough Energy Points" << std::endl;
	else if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "ClapTrap "<< _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!"<<std::endl;
		_energyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints <= 0)
		std::cout << "ClapTrap " << _name << " is already dead." << std::endl;
	else if (_hitPoints > 0)
	{
		std::cout << "ClapTrap " << _name << " receive " << amount << " damage."<<std::endl;
		_hitPoints -= amount;
		if (_hitPoints <= 0)
		{
			std::cout << "ClapTrap " << _name << " died." << std::endl;
		}
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints <= 0)
		std::cout << "ClapTrap " << _name << " is dead." << std::endl;
	else if (_energyPoints <= 0)
		std::cout << "ClapTrap " << _name << " doesn't have enough Energy Points" << std::endl;
	else if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "ClapTrap "<< _name << " repairs itself, restauring " << amount << " hp." <<std::endl;
		_hitPoints += amount;
		_energyPoints--;
	}
}