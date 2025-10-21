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
	_name = "";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap Derived constructor "<< _name<<" called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	_name = name;
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap Derived constructor "<< _name<<" called" << std::endl;

	std::cout << "diamond hp" << _hitPoints << std::endl;
	std::cout << "diamond ep" << _energyPoints << std::endl;
	std::cout << "diamond ad" << _attackDamage << std::endl;

	std::cout << "frag hp" << FragTrap::_hitPoints << std::endl;
	std::cout << "frag ep" <<  FragTrap::_energyPoints << std::endl;
	std::cout << "frag ad" << FragTrap::_attackDamage << std::endl;
	std::cout << "scav hp" << ScavTrap::_hitPoints << std::endl;
	std::cout << "scav ep" <<  ScavTrap::_energyPoints << std::endl;
	std::cout << "scav ad" << ScavTrap::_attackDamage << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor "<< _name<<" called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy):ClapTrap(copy._name)
{
	std::cout << "DiamondTrap Copy constructor "<< _name<<" called" << std::endl;
	*this = copy;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	std::cout << "DiamondTrap Copy assignment operator "<< _name<<" called" << std::endl;
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
	// if (_hitPoints <= 0)
	// 	std::cout << "DiamondTrap " << _name << "doesn't have enough HP." << std::endl;
	// else if (_energyPoints <= 0)
	// 	std::cout << "DiamondTrap " << _name << "doesn't have enough Energy Points" << std::endl;
	// else if (_energyPoints > 0 && _hitPoints > 0)
	// {
	// 	std::cout << "DiamondTrap "<< _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!"<<std::endl;
	// 	_energyPoints--;
	// }
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "My name is " <<_name<< " and my ClapTrap name is " <<ClapTrap::_name << std::endl;	
}