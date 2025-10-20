/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:14:18 by kevwang           #+#    #+#             */
/*   Updated: 2025/10/14 17:14:18 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap Albert("Albert");

	ClapTrap Tata(Albert);

	ClapTrap Toto;
	Toto=Tata;

	Toto.attack("Bernard");

	Toto.takeDamage(5);

	Toto.beRepaired(10);

	Toto.takeDamage(20);

	Toto.beRepaired(100);
}
