/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 12:27:16 by kevwang           #+#    #+#             */
/*   Updated: 2025/10/10 12:27:16 by kevwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int size = 10;
	Zombie* firstZombie = zombieHorde(size, "Bernard");

	for (int i = 0; i < size; i++)
	{
		// std::cout << i << " ";
		firstZombie[i].announce();
	}

	// for (int i = 0; i < size; i++)
	// {
	// 	delete firstZombie[i];
	// }
	delete [] firstZombie;
}