/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 11:17:44 by kevwang           #+#    #+#             */
/*   Updated: 2025/10/10 11:17:47 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	std::cout << "test" << std::endl;
	Zombie zombie1;

	zombie1.announce();

	Zombie *zombie2 = newZombie("test");
	zombie2->announce();

	delete zombie2;

	randomChump("Bon");
}