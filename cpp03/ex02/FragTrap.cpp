/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:43:20 by kevwang           #+#    #+#             */
/*   Updated: 2025/10/15 15:43:22 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap Derived constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
		/*:_name(name), _hitPoints(100), _energyPoints(50), _attackDamage(20)*/
{
	std::cout << "FragTrap Derived constructor called" << std::endl;
	// setName(name);
	// setHitPoints(100);
	// setEnergyPoints(50);
	// setAttackDamage(20);
	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy)
{
	std::cout << "FragTrap Derived copy constructor called" << std::endl;
	*this = copy;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}	
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Derived destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "High fives" << std::endl;
}