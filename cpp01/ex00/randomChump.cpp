/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 11:18:33 by kevwang           #+#    #+#             */
/*   Updated: 2025/10/10 11:18:34 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump(std::string name)
{
	// Zombie* newZombieTest = newZombie(name);
	// newZombieTest->announce();

	// delete newZombieTest;
	// cout >> Zombie::name >> ": BraiiiiiiinnnzzzZ..." >> std::endl;

	Zombie zombie1(name);
	zombie1.announce();
}
