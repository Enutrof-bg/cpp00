/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:07:27 by kevwang           #+#    #+#             */
/*   Updated: 2025/10/20 14:07:29 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap() : ClapTrap("_clap_name")
{
	std::cout << "DiamondTrap Default constructor called" << std::endl;
	_name = "";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(std::string name):ClapTrap(name + "_clap_name")
{
	std::cout << "DiamondTrap Default constructor called" << std::endl;
	_name = name;
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
	*this = copy;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}	
	return (*this);
}

void DiamondTrap::attack(const std::string& target)
{
	if (_hitPoints <= 0)
		std::cout << "DiamondTrap " << _name << "doesn't have enough HP." << std::endl;
	else if (_energyPoints <= 0)
		std::cout << "DiamondTrap " << _name << "doesn't have enough Energy Points" << std::endl;
	else if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "DiamondTrap "<< _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!"<<std::endl;
		_energyPoints--;
	}

}

void DiamondTrap::whoAmI()
{
	std::cout << "Test1:" <<_name<<std::endl;
	std::cout << "Test2:" <<ClapTrap::_name << std::endl;	
}